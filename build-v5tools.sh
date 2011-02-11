#!/bin/bash
set -x

if [ $# -ne 2 ]; then
  echo USage: $0 workspace prefix
  exit 1
fi

workspace=$1
prefix=$2

cd $workspace
if [ "x$(ls -A)" != "x" ]; then
  echo workspace not empty...quitting.
  exit 1
fi

export CVSROOT=l2:/prj/dsp/qdsp6/cvs

# checkout stuff
git clone /prj/austin/git/arch.git

#git clone git://git-hexagon.quicinc.com/hexagon-opensource/gcc/gcc-4.4.git
#git clone git://git-hexagon.quicinc.com/hexagon-opensource/gnutools
#git clone git://git-hexagon.quicinc.com/hexagon-opensource/newlib

git clone /prj/dsp/qdsp6/users/sundeepk/qdsp6_work/qdsp6_cvsroot/git-repo/gcc-4.4
git clone /prj/dsp/qdsp6/users/sundeepk/qdsp6_work/qdsp6_cvsroot/git-repo/gnutools
git clone /prj/dsp/qdsp6/users/sundeepk/qdsp6_work/qdsp6_cvsroot/git-repo/newlib

cvs co tools/include
cvs co -r V5 tools/libqdsp tools/dinkumware 

ln -s tools/include include
ln -s arch arch_v5

# switch to V5
cd $workspace/newlib
git checkout V5

cd $workspace/gcc-4.4
git checkout V5

cd $workspace/gnutools
git checkout V5

mkdir -p ${prefix}_newlib/qc/bin ${prefix}_dinkumware/qc/bin

# build arch
cd $workspace/arch/src
make
cp ../bin/sim ${prefix}_newlib/qc/bin
cp ../bin/sim ${prefix}_dinkumware/qc/bin
cp arch/hexagon_iset.h $workspace/gnutools/include/opcode/hexagon_iset_v5.h
cp arch/hexagon_asm_maps.h $workspace/gnutools/include/opcode/hexagon_asm_maps.h

# binutils
cd $workspace/gnutools
mkdir build_lnx
cd build_lnx
CFLAGS="-O0 -g" MAKEINFO=/pkg/qct/software/gnu/texinfo/4.13a/bin/makeinfo ../configure --target=hexagon --disable-nls --enable-bfd-assembler --disable-multilib  --prefix=$prefix/gnu
make -j8 2>&1 | tee make.out

rm -f $prefix; ln -s ${prefix}_newlib $prefix
make install

rm -f $prefix; ln -s ${prefix}_dinkumware $prefix
make install

export PATH=$prefix/gnu/bin:$PATH
ls -l $prefix
which hexagon-as

# gcc (newlib)
rm -f $prefix; ln -s ${prefix}_newlib $prefix
ls -l $prefix
which hexagon-as

cd $workspace/gcc-4.4
mkdir build_newlib
cd build_newlib
bash ../hexagon_g++_newlib_configure $prefix/gnu $workspace/newlib/newlib-1.12.0/newlib/libc/include
make -j8 2>&1 | tee make.out
make install

# gcc (dinkumware)
rm -f $prefix; ln -s ${prefix}_dinkumware $prefix
ls -l $prefix
which hexagon-as

cd $workspace/gcc-4.4
mkdir build_dinkumware
cd build_dinkumware
bash ../hexagon_g++_dinkumware_configure $prefix/gnu
make -j8 2>&1 | tee make.out
make install

# newlib
rm -f $prefix; ln -s ${prefix}_newlib $prefix
ls -l $prefix
which hexagon-gcc

cd $workspace/newlib/newlib-1.12.0
mkdir build
cd build
bash ../qdsp6_v5_configure $prefix/gnu
make -j8 2>&1 | tee make.out
make install

# dinkumware
rm -f $prefix; ln -s ${prefix}_dinkumware $prefix
ls -l $prefix
which hexagon-gcc

cd $workspace/tools/dinkumware
make -j8 | tee make.out
make install INSTALL_TOOLS_BASE_DIR=$prefix

# libqdsp (newlib)
rm -f $prefix; ln -s ${prefix}_newlib $prefix
ls -l $prefix
which hexagon-gcc

cd $workspace/tools/libqdsp
make clean
make | tee make.out
make install INSTALL_TOOLS_BASE_DIR=$prefix

# libqdsp (dinkumware)
rm -f $prefix; ln -s ${prefix}_dinkumware $prefix
ls -l $prefix
which hexagon-gcc

cd $workspace/tools/libqdsp
make clean
make | tee make.out
make install INSTALL_TOOLS_BASE_DIR=$prefix

echo DONE

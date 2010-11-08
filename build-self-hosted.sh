#!/bin/bash

#
# This assumes that the malloc patch has been applied from:
# /prj/dsp/qdsp6/users/adasgupt/emutls-patch.git
#

HOMEDIR=`pwd`
INSTALL_PATH=/prj/qct/coredev/hexagon/austin/scratch/users/adasgupt/self_hosting_44/install_dynamic

export CC=qdsp6-gcc
export PATH=/prj/qct/coredev/hexagon/austin/scratch/users/adasgupt/bootstrap_Oct2010/install/usr/bin:$PATH
COMP=`which $CC`
DIR=`dirname $COMP`
# For some reason, qdsp6-linux-gcc44 is created not qdsp6-linux-gcc. This
# must be a bug with the code that maintained both versions (346 & 44) of
# gcc
ln -s $DIR/qdsp6-gcc $DIR/qdsp6-linux-gcc

../qdsp6_canadian_cross_configure $INSTALL_PATH/usr
make -j 4 && make install

# Set up crt1.o
cd $INSTALL_PATH/usr/lib/gcc/qdsp6-linux/4.4.0
ln -s /usr/lib/crt1.o .

# Set up ld
cd $INSTALL_PATH/usr/libexec/gcc/qdsp6-linux/4.4.0
ln -s /usr/qdsp6-unknown-linux/bin/ld .

# Set up include
cd $INSTALL_PATH/usr/lib/gcc/qdsp6-linux/4.4.0/include
for i in $INSTALL_PATH/usr/include/*; do
    B=`basename $i`
    ln -s /usr/include/$B .
done

# Create a link for ld.so
cd $INSTALL_PATH/lib
ln -s ld-uClibc.so.0 ld.so

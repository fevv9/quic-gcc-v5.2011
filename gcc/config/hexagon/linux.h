/*-------------------------------------
Controlling the Compilation Driver, gcc
-------------------------------------*/

#undef TARGET_VERSION
#define TARGET_VERSION fputs (" (Hexagon GNU/Linux)", stderr);

#define DWARF2_DEBUGGING_INFO 1
#define DWARF2_ASM_LINE_DEBUG_INFO 1
#define PREFERRED_DEBUGGING_TYPE DWARF2_DEBUG

/* Use the generic pre-processor defines */
#define TARGET_OS_CPP_BUILTINS() LINUX_TARGET_OS_CPP_BUILTINS()

#define CPP_SPEC "%{posix:-D_POSIX_SOURCE} %{pthread:-D_REENTRANT}"

/* Copied from config/svr4.h and modified to add the -e _start option, forward
   the -G option's argument, and not forward the -b option to the linker. */
#undef	LINK_SPEC
#ifdef CROSS_COMPILE
#define LINK_SPEC "-e _start \
                   %{h*} %{v:-V} \
		   %{static:-dn -Bstatic} \
		   %{shared:-shared -G -dy -z text} \
		   %{symbolic:-Bsymbolic -G -dy -z text} \
		   %{G*:-G%*;:%{mbuilding-multilib:%{mG0lib:-G0}}} \
		   %{YP,*} \
		   %{Qy:} %{!Qn:-Qy}"
#else /* !CROSS_COMPILE */
#define LINK_SPEC "-e _start \
                   %{h*} %{v:-V} \
		   %{static:-dn -Bstatic} \
		   %{shared:-shared -G -dy -z text} \
		   %{symbolic:-Bsymbolic -G -dy -z text} \
		   %{G*:-G%*;:%{mbuilding-multilib:%{mG0lib:-G0}}} \
		   %{YP,*} \
		   %{!YP,*:%{p:-Y P,/usr/ccs/lib/libp:/usr/lib/libp:/usr/ccs/lib:/usr/lib} \
		    %{!p:-Y P,/usr/ccs/lib:/usr/lib}} \
		   %{Qy:} %{!Qn:-Qy}"
#endif /* !CROSS_COMPILE */

#undef HEXAGON_ABI_TABLE_DEFAULT_INDEX
#define HEXAGON_ABI_TABLE_DEFAULT_INDEX HEXAGON_ABI_LINUX


/* Definitions of HEXAGON target
   Copyright (C) 1998, 1999, 2000, 2001, 2002 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */


/*-----------------------------------------------------------------------
  This file provides a macro to support backward compatibility to the 
  old QDSP6-based names.
-----------------------------------------------------------------------*/

#ifndef QDSP6_COMPAT_H
#define QDSP6_COMPAT_H

#define __QDSP6_COMPAT__ 1

#ifdef  __QDSP6_COMPAT__
#define QDSP6_COMPAT_MACROS \
    if (hexagon_qdsp6_compat){ \
      switch(hexagon_arch){ \
        case HEXAGON_ARCH_V1: \
          builtin_define_std ("__QDSP6_V1__"); \
          builtin_define_std ("__QDSP6_ARCH__=1"); \
          break; \
        case HEXAGON_ARCH_V2: \
          builtin_define_std ("__QDSP6_V2__"); \
          builtin_define_std ("__QDSP6_ARCH__=2"); \
          break; \
        case HEXAGON_ARCH_V3: \
          builtin_define_std ("__QDSP6_V3__"); \
          builtin_define_std ("__QDSP6_ARCH__=3"); \
          break; \
        case HEXAGON_ARCH_V4: \
          builtin_define_std ("__QDSP6_V4__"); \
          builtin_define_std ("__QDSP6_ARCH__=4"); \
          break; \
        default: \
          abort(); \
      } \
      builtin_define_std ("__qdsp6__"); \
      builtin_define_std ("qdsp6"); \
    };
#else  /*  __QDSP6_COMPAT__ */
#define QDSP6_COMPAT_MACROS
#endif  /*  __QDSP6_COMPAT__ */

#endif /* !QDSP6_COMPAT_H */


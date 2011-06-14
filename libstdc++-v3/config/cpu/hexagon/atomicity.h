// Low-level functions for atomic operations: Sparc version  -*- C++ -*-
// Copyright (C) 1999, 2000, 2001, 2002, 2004, 2005, 2009
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

#include <ext/atomicity.h>

_GLIBCXX_BEGIN_NAMESPACE(__gnu_cxx)

  _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  {
    _Atomic_word tmp;
    _Atomic_word __old_val;
    asm volatile (
       "1:  %2 = memw_locked(%3);\n"
       "  %0 = add(%2,%4);\n"
       "  memw_locked(%3,P3) = %0;\n"
       "  if (!P3) jump 1b;\n"
       : "=&r" (tmp), "+m" (*__mem), "=&r" (__old_val)
       : "r" (__mem), "r" (__val)
       : "p3"
     );
     return __old_val;
  }

  void
  __attribute__ ((__unused__))
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  {
    _Atomic_word tmp;
    asm volatile (
       "1:  %0 = memw_locked(%2);\n"
       "  %0 = add(%0,%3);\n"
       "  memw_locked(%2,P3) = %0;\n"
       "  if (!P3) jump 1b;\n"
       : "=&r" (tmp), "+m"(*__mem)
       : "r" (__mem), "r" (__val)
       : "p3"
     );
  }

_GLIBCXX_END_NAMESPACE

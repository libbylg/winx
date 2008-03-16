/* -------------------------------------------------------------------------
// WINX: a C++ template GUI library - MOST SIMPLE BUT EFFECTIVE
// 
// This file is a part of the WINX Library.
// The use and distribution terms for this software are covered by the
// Common Public License 1.0 (http://opensource.org/licenses/cpl.php)
// which can be found in the file CPL.txt at this distribution. By using
// this software in any fashion, you are agreeing to be bound by the terms
// of this license. You must not remove this notice, or any other, from
// this software.
// 
// Module: sgi/rope.h
// Creator: xushiwei
// Email: xushiweizh@gmail.com
// Date: 2006-8-18 18:56:07
// 
// $Id: rope.h,v 1.1 2006/10/18 12:13:39 xushiwei Exp $
// -----------------------------------------------------------------------*/
#ifndef __SGI_ROPE_H__
#define __SGI_ROPE_H__

// -------------------------------------------------------------------------
// class rope

#ifndef __SGI_CONFIG_H__
#include "config.h"
#endif

#ifndef __SGI_ALGORITHM_H__
#include "algorithm.h"
#endif

#ifndef __SGI_STRING_H__
#include "string.h"
#endif

#pragma warning(disable:4355)

#ifndef __SGI_STL_INTERNAL_NUMERIC_H
#include "../../../../stl/stl_numeric.h"
#endif

#define __GC
#define GC_REGISTER_FINALIZER(a0, a1, a2, a3, a4)

#ifndef __SGI_STL_ROPE_H
#include "../../../../stl/rope.h"
#endif

#undef __GC
#undef GC_REGISTER_FINALIZER

#pragma warning(default:4355)

// -------------------------------------------------------------------------
// $Log: rope.h,v $
//

#endif /* __SGI_ROPE_H__ */
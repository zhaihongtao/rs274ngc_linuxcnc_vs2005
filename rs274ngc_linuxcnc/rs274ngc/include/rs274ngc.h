/********************************************************************
* Description: rs274ngc.hh
*
*   Derived from a work by Thomas Kramer
*
* Author:
* License: GPL Version 2
* System: Linux
*    
* Copyright (c) 2004 All rights reserved.
*
********************************************************************/
#ifndef RS274NGC_HH
#define RS274NGC_HH

#include "interp_base.h"



/**********************/
/* INCLUDE DIRECTIVES */
/**********************/

#include <stdio.h>
#include "canon.h"
#include "emc.h"
#include "debugflags.h"

struct setup;
#ifndef JAVA_DIAG_APPLET
typedef setup *setup_pointer;
#endif
typedef struct block_struct block;
#ifndef JAVA_DIAG_APPLET
typedef block *block_pointer;
#endif

typedef struct remap_struct remap;
typedef remap *remap_pointer;

typedef struct context_struct context;
typedef context *context_pointer;

typedef struct offset_struct offset;
typedef offset *offset_pointer;

// Declare class so that we can use it in the typedef.
class Interp;
typedef int (Interp::*read_function_pointer) (char *, int *, block_pointer, double *);



#undef DEBUG_EMC



/*
#define _logDebug(mask,dlflags,level, fmt, ...)	\
    do {						\
	if (((mask & _setup.debugmask) &&		\
	     (level < _setup.loggingLevel)) ||		\
            (mask & EMC_DEBUG_UNCONDITIONAL)) {		\
	    do_Log(dlflags,				\
		  __FILE__,				\
		  __LINE__ ,				\
		  fmt,				\
		  ...);				\
        }						\
    } while(0)
*/



//#define logDebug(fmt, args...)  _logDebug(EMC_DEBUG_INTERP,LOG_FILENAME,1,fmt, ## args)
//#define logDebug(fmt, ...)  _logDebug(EMC_DEBUG_INTERP,0,1,fmt, ...)

//#define logConfig(fmt, ...) _logDebug(EMC_DEBUG_CONFIG,0,1,fmt, ...)
//#define logOword(fmt, ...)  _logDebug(EMC_DEBUG_OWORD,0,1,fmt, ...)
//#define logRemap(fmt, ...)  _logDebug(EMC_DEBUG_REMAP,0,1,fmt, ...)
//#define logPy(fmt, ...)     _logDebug(EMC_DEBUG_PYTHON,0,1,fmt, ...)
//#define logNP(fmt, ...)     _logDebug(EMC_DEBUG_NAMEDPARAM,0,1,fmt, ...)

// log always
// #define Log(fmt, ...)  	\
// 	do {						\
// 	    va_list ap;           \
//         va_start(ap, fmt);    \
// 	    _logDebug(EMC_DEBUG_UNCONDITIONAL,LOG_PID|LOG_FILENAME,-1,fmt, ap) \
// 		va_end(ap); \
// 	} while(0)

void Log(const char *fmt, ...);
void Error(const char *fmt, ...);




//_logDebug(EMC_DEBUG_UNCONDITIONAL,0,-1,fmt, ...)



#endif

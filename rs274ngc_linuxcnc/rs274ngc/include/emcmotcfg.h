/********************************************************************
* Description: emcmotcfg.h
*   Default values for compile-time parameters.
*
*   Derived from a work by Fred Proctor & Will Shackleford
*
* Author:
* License: GPL Version 2
* System: Linux
*    
* Copyright (c) 2004 All rights reserved.
********************************************************************/
#ifndef EMCMOTCFG_H
#define EMCMOTCFG_H

/* default name of EMCMOT ini file */
#define DEFAULT_EMCMOT_INIFILE "emc.ini"	/* same as for EMC-- we're in 
						   touch */

/* number of joints supported
   Note: this is not a global variable but a compile-time parameter
   since it sets array sizes, etc. */
#define EMCMOT_MAX_JOINTS 9
/* number of axes defined by the interp */ //FIXME: shouldn't be here..
#define EMCMOT_MAX_AXIS 9

#define EMCMOT_MAX_SPINDLES 8
#define EMCMOT_MAX_DIO 64
#define EMCMOT_MAX_AIO 64

#if (EMCMOT_MAX_DIO > 64) || (EMCMOT_MAX_AIO > 64)
#error A 64 bit bitmask is used in the planner.  Don't increase these until that's fixed.
#endif

#define EMCMOT_ERROR_NUM 32	/* how many errors we can queue */
#define EMCMOT_ERROR_LEN 1024	/* how long error string can be */

/*
  Shared memory keys for simulated motion process. No base address
  values need to be computed, since operating system does this for us
  */
#define DEFAULT_SHMEM_KEY 100

/* default comm timeout, in seconds */
#define DEFAULT_EMCMOT_COMM_TIMEOUT 1.0

/* initial velocity, accel used for coordinated moves */
#define DEFAULT_VELOCITY 1.0
#define DEFAULT_ACCELERATION 10.0

/* maximum and minimum limit defaults for all axes */
#define DEFAULT_MAX_LIMIT 1000
#define DEFAULT_MIN_LIMIT -1000

/* default number of motion io pins */
#define DEFAULT_DIO 4
#define DEFAULT_AIO 4

/* size of motion queue
 * a TC_STRUCT is about 512 bytes so this queue is
 * about a megabyte.  */
#define DEFAULT_TC_QUEUE_SIZE 2000

/* max following error */
#define DEFAULT_MAX_FERROR 100

///////////////////////////////////////////////
//
#define LINELEN 255
#define PATH_MAX 260

#define INCH_PER_MM (1.0/25.4)

#define INTERP_OK 0
#define INTERP_EXIT 1
#define INTERP_EXECUTE_FINISH 2
#define INTERP_ENDFILE 3
#define INTERP_FILE_NOT_OPEN 4
#define INTERP_ERROR 5

/*
The return values OK, EXIT, EXECUTE_FINISH, and ENDFILE represent
normal, non-error return conditions. FILE_NOT_OPEN is the first
value that represents an error result. INTERP_MIN_ERROR
is therefore the index of the last non-error return value.
*/

#define INTERP_MIN_ERROR 3

#define PACKAGE_VERSION "2.4.6"
#define nullptr NULL
#define F_OK	0

/* Definitions of useful mathematical constants
 * M_E        - e
 * M_LOG2E    - log2(e)
 * M_LOG10E   - log10(e)
 * M_LN2      - ln(2)
 * M_LN10     - ln(10)
 * M_PI       - pi
 * M_PI_2     - pi/2
 * M_PI_4     - pi/4
 * M_1_PI     - 1/pi
 * M_2_PI     - 2/pi
 * M_2_SQRTPI - 2/sqrt(pi)
 * M_SQRT2    - sqrt(2)
 * M_SQRT1_2  - 1/sqrt(2)
 */

#define M_E        2.71828182845904523536
#define M_LOG2E    1.44269504088896340736
#define M_LOG10E   0.434294481903251827651
#define M_LN2      0.693147180559945309417
#define M_LN10     2.30258509299404568402
#define M_PI       3.14159265358979323846
#define M_PI_2     1.57079632679489661923
#define M_PI_4     0.785398163397448309616
#define M_1_PI     0.318309886183790671538
#define M_2_PI     0.636619772367581343076
#define M_2_SQRTPI 1.12837916709551257390
#define M_SQRT2    1.41421356237309504880
#define M_SQRT1_2  0.707106781186547524401


#ifndef M_PIl
#define M_PIl		3.1415926535897932384626433832795029L  /* pi */
#endif
#ifndef M_PI_2l
#define M_PI_2l        1.570796326794896619231321691639751442L /* pi/2 */
#endif
#ifndef M_PI
#define M_PI		3.1415926535897932384626433832795029   /* pi */
#endif


#endif

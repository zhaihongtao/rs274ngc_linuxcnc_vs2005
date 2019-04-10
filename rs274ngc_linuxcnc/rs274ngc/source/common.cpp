/* Classic Ladder Project */
/* Copyright (C) 2001-2003 Marc Le Douarain */
/* mavati@club-internet.fr */
/* http://www.multimania.com/mavati/classicladder */
/* May 2003 */
/* Part written by Thomas Gleixner */
/* --------------------------------- */
/* Config file sizes to alloc parser */
/* --------------------------------- */
/* This library is free software; you can redistribute it and/or */
/* modify it under the terms of the GNU Lesser General Public */
/* License as published by the Free Software Foundation; either */
/* version 2.1 of the License, or (at your option) any later version. */

/* This library is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU */
/* Lesser General Public License for more details. */

/* You should have received a copy of the GNU Lesser General Public */
/* License along with this library; if not, write to the Free Software */
/* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */


#include "common.h"
#include <string.h>
#include "emcmotcfg.h"
#include <string>
#include <direct.h>



int strncasecmp(const char* s1, const char* s2, size_t len)
{
	return _strnicmp(s1, s2, len);
}

int strcasecmp(const char* s1, const char* s2)
{
	return _stricmp(s1, s2);
}

//得到引用程序目录
bool getapppath ( char * szPath, int nSize )
{
	return _getcwd ( szPath, nSize );
}

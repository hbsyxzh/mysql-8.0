/* Copyright (c) 2015, 2017, Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   51 Franklin Street, Suite 500, Boston, MA 02110-1335 USA */

#ifndef PLUGIN_SERVER_INCLUDE
#define PLUGIN_SERVER_INCLUDE

/*
  Includes only from server include folder.
*/
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <my_thread.h>
#include <my_sys.h>
#include <my_stacktrace.h>

/*
  We should have a different access to these definitions.
*/
#include "current_thd.h"  // current_thd
#include "mysqld.h"       // mysql_tmpdir, stage_executing

#endif /* PLUGIN_SERVER_INCLUDE */

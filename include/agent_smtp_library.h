/*  =========================================================================
    agent-smtp - generated layer of public API

    Copyright (C) 2014 - 2015 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef AGENT_SMTP_LIBRARY_H_INCLUDED
#define AGENT_SMTP_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <malamute.h>
#include <biosproto.h>

//  AGENT_SMTP version macros for compile-time API detection
#define AGENT_SMTP_VERSION_MAJOR 0
#define AGENT_SMTP_VERSION_MINOR 1
#define AGENT_SMTP_VERSION_PATCH 0

#define AGENT_SMTP_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define AGENT_SMTP_VERSION \
    AGENT_SMTP_MAKE_VERSION(AGENT_SMTP_VERSION_MAJOR, AGENT_SMTP_VERSION_MINOR, AGENT_SMTP_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined AGENT_SMTP_STATIC
#       define AGENT_SMTP_EXPORT
#   elif defined AGENT_SMTP_EXPORTS
#       define AGENT_SMTP_EXPORT __declspec(dllexport)
#   else
#       define AGENT_SMTP_EXPORT __declspec(dllimport)
#   endif
#else
#   define AGENT_SMTP_EXPORT
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _bios_smtp_server_t bios_smtp_server_t;
#define BIOS_SMTP_SERVER_T_DEFINED


//  Public classes, each with its own header file
#include "bios_smtp_server.h"

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

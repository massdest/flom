/*
 * Copyright (c) 2009-2012, Christian Ferrari <tiian@users.sourceforge.net>
 * All rights reserved.
 *
 * This file is part of FLOM.
 *
 * FLOM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 *
 * FLOM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with FLOM.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef FLOM_CONFIG_H
# define FLOM_CONFIG_H



#include <config.h>



#ifdef HAVE_SYS_UN_H
# include <sys/un.h>
#endif



#include "flom_trace.h"



/* save old FLOM_TRACE_MODULE and set a new value */
#ifdef FLOM_TRACE_MODULE
# define FLOM_TRACE_MODULE_SAVE FLOM_TRACE_MODULE
# undef FLOM_TRACE_MODULE
#else
# undef FLOM_TRACE_MODULE_SAVE
#endif /* FLOM_TRACE_MODULE */
#define FLOM_TRACE_MODULE      FLOM_TRACE_MOD_CONFIG



#define LOCAL_SOCKET_SIZE sizeof(((struct sockaddr_un *)NULL)->sun_path)

/**
 * This struct contains all the values necessary for configuration
 */
struct flom_config {
    /**
     * Path of UNIX socket using for local connection
     */
    char local_socket_path_name[LOCAL_SOCKET_SIZE];
    /**
     * Name of the file must be used to write trace messages
     */
    char const *trace_file;
};
typedef struct flom_config flom_config_t;



#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



    /**
     * Set config to system default
     * @param config OUT config object
     */
    void flom_config_reset(flom_config_t *config);
    

    
    /**
     * Set trace_file in config object
     */
    static inline void flom_config_set_trace_file(
        flom_config_t *config, const char *trace_file) {
        config->trace_file = trace_file; }


    
#ifdef __cplusplus
}
#endif /* __cplusplus */



/* restore old value of FLOM_TRACE_MODULE */
#ifdef FLOM_TRACE_MODULE_SAVE
# undef FLOM_TRACE_MODULE
# define FLOM_TRACE_MODULE FLOM_TRACE_MODULE_SAVE
# undef FLOM_TRACE_MODULE_SAVE
#endif /* FLOM_TRACE_MODULE_SAVE */



#endif /* FLOM_CONFIG_H */

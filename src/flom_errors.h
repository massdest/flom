/*
 * Copyright (c) 2013-2014, Christian Ferrari <tiian@users.sourceforge.net>
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
#ifndef FLOM_ERRORS_H
# define FLOM_ERRORS_H

#include <config.h>



#ifdef HAVE_ERRNO_H
# include <errno.h>
#endif /* HAVE_ERRNO_H */



#include <flom_defines.h>



/**
 * Exit status when FLOM is unable to execute the command
 */
#define FLOM_ES_UNABLE_TO_EXECUTE_COMMAND   _ES_UNABLE_TO_EXECUTE_COMMAND
/**
 * Exit status when FLOM is unable to lock a resource already locked by
 * someone else
 */
#define FLOM_ES_RESOURCE_BUSY               _ES_RESOURCE_BUSY
/**
 * Exit status when FLOM pick-up an error
 */
#define FLOM_ES_GENERIC_ERROR               _ES_GENERIC_ERROR
/**
 * Exit status when FLOM terminates without errors (and without executing
 * some process)
 */
#define FLOM_ES_OK                           0



/*********************************************************
 *                                                       *
 * REASON / RETURN CODES                                 *
 *                                                       *
 *********************************************************/






/* WARNINGS */
/**
 * A network operation timed out
 */
#define FLOM_RC_NETWORK_TIMEOUT                       +7
/**
 * Peer has closed socket while expecting data
 */
#define FLOM_RC_CONNECTION_CLOSED                     +6
/**
 * Peer is not ready to accept a connection
 */
#define FLOM_RC_CONNECTION_REFUSED                    +5
/**
 * The lock can not be obtained because the resource can not host the request
 * (example is asking 12 numeric resources for a resource defined with a
 * total quantity of 9)
 */
#define FLOM_RC_LOCK_IMPOSSIBLE                       +4
/**
 * The lock can not be obtained because the resource is already locked
 */
#define FLOM_RC_LOCK_BUSY                             +3
/**
 * The lock can not be obtained, generic issue
 */
#define FLOM_RC_LOCK_CANT_LOCK                        +2
/**
 * The lock can not be obtained now, but the request was enqueued
 */
#define FLOM_RC_LOCK_ENQUEUED                         +1



/* OK */
/**
 * Successfully completion
 */
#define FLOM_RC_OK                                     0



/* ERRORS */
/**
 * Internal error: unrecoverable status!
 */
#define FLOM_RC_INTERNAL_ERROR                        -1
/**
 * Flom was not able to start a new daemon and/or connect to it
 */
#define FLOM_RC_DAEMON_NOT_STARTED                    -2
/**
 * Unespected network event
 */
#define FLOM_RC_NETWORK_EVENT_ERROR                   -3
/**
 * A passed object/option/arg is NULL and it can NOT be inferred from a default
 * value
 */
#define FLOM_RC_NULL_OBJECT                           -4
/**
 * A specified option is not valid
 */
#define FLOM_RC_INVALID_OPTION                        -5
/**
 * A corrupted object has been discovered
 */
#define FLOM_RC_OBJ_CORRUPTED                         -6
/**
 * A parameter passed to a function is OUT OF RANGE
 */
#define FLOM_RC_OUT_OF_RANGE                          -7
/**
 * The number of chars of the prefix of the message 
 */
#define FLOM_RC_INVALID_PREFIX_SIZE                   -8
/**
 * The process has been stopped to avoid a buffer overflow
 */
#define FLOM_RC_BUFFER_OVERFLOW                       -9
/**
 * The length of the message differs from prefix 
 */
#define FLOM_RC_INVALID_MSG_LENGTH                   -10
/**
 * The XML message is malformed and can not be processed
 */
#define FLOM_RC_INVALID_PROPERTY_VALUE               -11
/**
 * The container is full and can NOT store more elements
 */
#define FLOM_RC_CONTAINER_FULL                       -12
/**
 * A routine has been invoked in an improper context
 */
#define FLOM_RC_PROTOCOL_ERROR                       -13
/**
 * Specified resource name is not valid
 */
#define FLOM_RC_INVALID_RESOURCE_NAME                -14
/**
 * Client and server are not using the same communication protocol
 */
#define FLOM_RC_PROTOCOL_LEVEL_MISMATCH              -15
/**
 * Error occurred while deserializing XML message
 */
#define FLOM_RC_MSG_DESERIALIZE_ERROR                -16

/**
 * "accept" function error
 */
#define FLOM_RC_ACCEPT_ERROR                        -100
/**
 * "bind" function error
 */
#define FLOM_RC_BIND_ERROR                          -101
/**
 * "chdir" function error
 */
#define FLOM_RC_CHDIR_ERROR                         -102
/**
 * "close" function error
 */
#define FLOM_RC_CLOSE_ERROR                         -103
/**
 * "connect" function error
 */
#define FLOM_RC_CONNECT_ERROR                       -104
/**
 * "execvp" function error
 */
#define FLOM_RC_EXECVP_ERROR                        -105
/**
 * "fcntl" function error
 */
#define FLOM_RC_FCNTL_ERROR                         -106
/**
 * "fork" function error
 */
#define FLOM_RC_FORK_ERROR                          -107
/**
 * "getaddrinfo" function error
 */
#define FLOM_RC_GETADDRINFO_ERROR                   -108
/**
 * "getnameinfo" function error
 */
#define FLOM_RC_GETNAMEINFO_ERROR                   -109
/**
 * "getsockname" function error
 */
#define FLOM_RC_GETSOCKNAME_ERROR                   -110
/**
 * "getsockopt" function error
 */
#define FLOM_RC_GETSOCKOPT_ERROR                    -111
/**
 * "listen" function error
 */
#define FLOM_RC_LISTEN_ERROR                        -112
/**
 * "malloc"/"g_malloc" function error
 */
#define FLOM_RC_MALLOC_ERROR                        -113
/**
 * "pipe" function error
 */
#define FLOM_RC_PIPE_ERROR                          -114
/**
 * "poll" function error
 */
#define FLOM_RC_POLL_ERROR                          -115
/**
 * "read" function error
 */
#define FLOM_RC_READ_ERROR                          -116
/**
 * "recv" function error
 */
#define FLOM_RC_RECV_ERROR                          -117
/**
 * "recvfrom" function error
 */
#define FLOM_RC_RECVFROM_ERROR                      -118
/**
 * "regcomp" function error
 */
#define FLOM_RC_REGCOMP_ERROR                       -119
/**
 * "regexec" function error
 */
#define FLOM_RC_REGEXEC_ERROR                       -120
/**
 * "send" function error
 */
#define FLOM_RC_SEND_ERROR                          -121
/**
 * "sendto" function error
 */
#define FLOM_RC_SENDTO_ERROR                        -122
/**
 * "setsid" function error
 */
#define FLOM_RC_SETSID_ERROR                        -123
/**
 * "setsockopt" function error
 */
#define FLOM_RC_SETSOCKOPT_ERROR                    -124
/**
 * "signal" function error
 */
#define FLOM_RC_SIGNAL_ERROR                        -125
/**
 * "socket" function error
 */
#define FLOM_RC_SOCKET_ERROR                        -126
/**
 * "snprintf" function error (truncation)
 */
#define FLOM_RC_SNPRINTF_ERROR                      -127
/**
 * "unlink" function error
 */
#define FLOM_RC_UNLINK_ERROR                        -128
/**
 * "wait" function error
 */
#define FLOM_RC_WAIT_ERROR                          -129
/**
 * "write" function error
 */
#define FLOM_RC_WRITE_ERROR                         -130

/* GLIB related errors */

/**
 * "g_array_new" function error
 */
#define FLOM_RC_G_ARRAY_NEW_ERROR                   -200
/**
 * "g_base64_decode" function error
 */
#define FLOM_RC_G_BASE64_DECODE_ERROR               -201
/**
 * "g_base64_encode" function error
 */
#define FLOM_RC_G_BASE64_ENCODE_ERROR               -202
/**
 * "g_key_file_load_from_file" function error
 */
#define FLOM_RC_G_KEY_FILE_LOAD_FROM_FILE_ERROR     -203
/**
 * "g_key_file_new" function error
 */
#define FLOM_RC_G_KEY_FILE_NEW_ERROR                -204
/**
 * "g_markup_parse_context_new_error" function error
 */
#define FLOM_RC_G_MARKUP_PARSE_CONTEXT_NEW_ERROR    -205
/**
 * "g_markup_parse_context_parse" function error
 */
#define FLOM_RC_G_MARKUP_PARSE_CONTEXT_PARSE_ERROR  -206
/**
 * "g_ptr_array_remove_index_fast" function error
 */
#define FLOM_RC_G_PTR_ARRAY_REMOVE_INDEX_FAST_ERROR -207
/**
 * "g_queue_new" function error
 */
#define FLOM_RC_G_QUEUE_NEW_ERROR                   -208
/**
 * "g_strdup" function error
 */
#define FLOM_RC_G_STRDUP_ERROR                      -209
/**
 * "g_strndup" function error
 */
#define FLOM_RC_G_STRNDUP_ERROR                     -210
/**
 * "g_strsplit" function error
 */
#define FLOM_RC_G_STRSPLIT_ERROR                    -211
/**
 * "g_thread_create" function error
 */
#define FLOM_RC_G_THREAD_CREATE_ERROR               -212
/**
 * "g_try_malloc"/"g_try_malloc0" function error
 */
#define FLOM_RC_G_TRY_MALLOC_ERROR                  -213



#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



      /**
       * <B>PUBLIC METHOD</B><BR>
       * Retrieve the description associated to a return/reason code
       * @param ret_cod IN return/reason code of the desired description
       * @return a const string containing a description of reason code
       */
      const char *flom_strerror(int ret_cod);
      
      

#ifdef __cplusplus
}
#endif /* __cplusplus */



#endif /* FLOM_ERRORS_H */



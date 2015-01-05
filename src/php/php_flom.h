/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_FLOM_H
#define PHP_FLOM_H

extern zend_module_entry flom_module_entry;
#define phpext_flom_ptr &flom_module_entry

#ifdef PHP_WIN32
# define PHP_FLOM_API __declspec(dllexport)
#else
# define PHP_FLOM_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(flom);
PHP_MSHUTDOWN_FUNCTION(flom);
PHP_RINIT_FUNCTION(flom);
PHP_RSHUTDOWN_FUNCTION(flom);
PHP_MINFO_FUNCTION(flom);

ZEND_NAMED_FUNCTION(_wrap_flom_strerror);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_t_state_set);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_t_state_get);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_t_conn_data_set);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_t_conn_data_get);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_t_config_set);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_t_config_get);
ZEND_NAMED_FUNCTION(_wrap_new_flom_handle_t);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_init);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_clean);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_new);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_delete);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_lock);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_unlock);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_discovery_attempts);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_discovery_attempts);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_discovery_timeout);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_discovery_timeout);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_discovery_ttl);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_discovery_ttl);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_lock_mode);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_lock_mode);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_multicast_address);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_multicast_address);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_multicast_port);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_multicast_port);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_resource_create);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_resource_create);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_resource_idle_lifespan);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_resource_idle_lifespan);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_resource_name);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_resource_name);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_resource_quantity);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_resource_quantity);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_resource_timeout);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_resource_timeout);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_socket_name);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_socket_name);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_trace_filename);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_trace_filename);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_unicast_address);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_unicast_address);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_get_unicast_port);
ZEND_NAMED_FUNCTION(_wrap_flom_handle_set_unicast_port);
#endif /* PHP_FLOM_H */

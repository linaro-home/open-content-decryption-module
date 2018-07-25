/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "opencdm_xdr.h"

bool_t
xdr_rpc_request_is_type_supported (XDR *xdrs, rpc_request_is_type_supported *objp)
{

	 if (!xdr_array (xdrs, (char **)&objp->key_system.key_system_val, (u_int *) &objp->key_system.key_system_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->mime_type.mime_type_val, (u_int *) &objp->mime_type.mime_type_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_mediakeys (XDR *xdrs, rpc_request_mediakeys *objp)
{

	 if (!xdr_array (xdrs, (char **)&objp->key_system.key_system_val, (u_int *) &objp->key_system.key_system_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_certificate (XDR *xdrs, rpc_request_certificate *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->certificate.certificate_val, (u_int *) &objp->certificate.certificate_len, ~0,
		sizeof (uint8_t), (xdrproc_t) xdr_uint8_t))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_callback_info (XDR *xdrs, rpc_request_callback_info *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->hostname.hostname_val, (u_int *) &objp->hostname.hostname_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_uint64_t (xdrs, &objp->prog_num))
		 return FALSE;
	 if (!xdr_uint32_t (xdrs, &objp->prog_version))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_create_session (XDR *xdrs, rpc_request_create_session *objp)
{

	 if (!xdr_array (xdrs, (char **)&objp->init_data_type.init_data_type_val, (u_int *) &objp->init_data_type.init_data_type_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->init_data.init_data_val, (u_int *) &objp->init_data.init_data_len, ~0,
		sizeof (uint8_t), (xdrproc_t) xdr_uint8_t))
		 return FALSE;
	 if (!xdr_rpc_request_callback_info (xdrs, &objp->callback_info))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_session_load (XDR *xdrs, rpc_request_session_load *objp)
{
         if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
                sizeof (char), (xdrproc_t) xdr_char))
                 return FALSE;
        return TRUE;
}

bool_t
xdr_rpc_request_load_session (XDR *xdrs, rpc_request_load_session *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_session_update (XDR *xdrs, rpc_request_session_update *objp)
{

	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->key.key_val, (u_int *) &objp->key.key_len, ~0,
		sizeof (uint8_t), (xdrproc_t) xdr_uint8_t))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_session_remove (XDR *xdrs, rpc_request_session_remove *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_session_close (XDR *xdrs, rpc_request_session_close *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_session_release (XDR *xdrs, rpc_request_session_release *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_request_mediaengine_data (XDR *xdrs, rpc_request_mediaengine_data *objp)
{
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->auth_data.auth_data_val, (u_int *) &objp->auth_data.auth_data_len, ~0,
		sizeof (uint8_t), (xdrproc_t) xdr_uint8_t))
		 return FALSE;
	 if (!xdr_int32_t (xdrs, &objp->id_exchange_shmem))
		 return FALSE;
	 if (!xdr_int32_t (xdrs, &objp->id_exchange_sem))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_response_generic (XDR *xdrs, rpc_response_generic *objp)
{

	 if (!xdr_int (xdrs, &objp->platform_val))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_response_create_mediaengine_session (XDR *xdrs, rpc_response_create_mediaengine_session *objp)
{

	 if (!xdr_int (xdrs, &objp->platform_val))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->socket_channel_id))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_response_create_session (XDR *xdrs, rpc_response_create_session *objp)
{

	 if (!xdr_int (xdrs, &objp->platform_val))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->session_id.session_id_val, (u_int *) &objp->session_id.session_id_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->licence_req.licence_req_val, (u_int *) &objp->licence_req.licence_req_len, ~0,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

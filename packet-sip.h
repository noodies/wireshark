/* packet-sip.h
 *
 * $Id: packet-sip.h,v 1.3 2004/06/16 18:20:49 etxrab Exp $
 *
 * Ethereal - Network traffic analyzer
 * By Gerald Combs <gerald@ethereal.com>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef __PACKET_SIP_H__
#define __PACKET_SIP_H__

#include <epan/packet.h>

typedef struct _sip_info_value_t
{
    gchar	*request_method;
    guint	 response_code;
	guchar	resend;
} sip_info_value_t;

extern void dfilter_store_sip_from_addr(tvbuff_t *tvb,proto_tree *tree,guint parameter_offset, 
					  guint parameter_len);

#endif

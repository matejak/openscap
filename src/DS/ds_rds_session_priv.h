/*
 * Copyright 2014 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *   Šimon Lukašík
 *
 */
#ifndef OSCAP_DS_RDS_SESSION_PRIV_H
#define OSCAP_DS_RDS_SESSION_PRIV_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "common/public/oscap.h"
#include "common/util.h"
#include "DS/public/scap_ds.h"
#include "DS/public/ds_rds_session.h"

OSCAP_HIDDEN_START;

xmlDoc *ds_rds_session_get_xmlDoc(struct ds_rds_session *session);
const char *ds_rds_session_get_target_dir(struct ds_rds_session *session);
int ds_rds_session_register_component_source(struct ds_rds_session *session, const char *content_id, struct oscap_source *component);

OSCAP_HIDDEN_END;
#endif

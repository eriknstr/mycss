/*
 Copyright (C) 2016 Alexander Borisov
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 
 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#ifndef MyHTML_MyCSS_NAMESPACE_INIT_H
#define MyHTML_MyCSS_NAMESPACE_INIT_H
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <mycss/namespace/myosi.h>
#include <mycss/result.h>
#include <myhtml/mynamespace.h>

mycss_namespace_t * mycss_namespace_create(void);
mycss_status_t mycss_namespace_init(mycss_entry_t* entry, mycss_namespace_t* ns);
mycss_status_t mycss_namespace_clean_all(mycss_namespace_t* ns);
mycss_namespace_t * mycss_namespace_destroy(mycss_namespace_t* ns, bool self_destroy);

void mycss_namespace_entry_clean(mycss_namespace_entry_t* ns_entry);

const char * mycss_namespace_name_by_id(mycss_namespace_t* ns, size_t ns_id, size_t *length);

void mycss_namespace_print(mycss_namespace_t* ns, size_t ns_id, FILE* fh, bool with_vbar);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MyHTML_MyCSS_NAMESPACE_INIT_H */

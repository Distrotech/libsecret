
/* Generated data (by glib-mkenums) */


#include <glib-object.h>

#ifndef SECRET_COMPILATION
#define SECRET_COMPILATION
#endif

#include "secret-collection.h"
/* enumerations from "secret-collection.h" */
GType secret_collection_flags_get_type (void) G_GNUC_CONST;

GType
secret_collection_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { SECRET_COLLECTION_NONE, "SECRET_COLLECTION_NONE", "none" },
            { SECRET_COLLECTION_LOAD_ITEMS, "SECRET_COLLECTION_LOAD_ITEMS", "load-items" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("SecretCollectionFlags"), values);
    }
    return etype;
}

GType secret_collection_create_flags_get_type (void) G_GNUC_CONST;

GType
secret_collection_create_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { SECRET_COLLECTION_CREATE_NONE, "SECRET_COLLECTION_CREATE_NONE", "none" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("SecretCollectionCreateFlags"), values);
    }
    return etype;
}

#include "secret-item.h"
/* enumerations from "secret-item.h" */
GType secret_item_flags_get_type (void) G_GNUC_CONST;

GType
secret_item_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { SECRET_ITEM_NONE, "SECRET_ITEM_NONE", "none" },
            { SECRET_ITEM_LOAD_SECRET, "SECRET_ITEM_LOAD_SECRET", "load-secret" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("SecretItemFlags"), values);
    }
    return etype;
}

GType secret_item_create_flags_get_type (void) G_GNUC_CONST;

GType
secret_item_create_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { SECRET_ITEM_CREATE_NONE, "SECRET_ITEM_CREATE_NONE", "none" },
            { SECRET_ITEM_CREATE_REPLACE, "SECRET_ITEM_CREATE_REPLACE", "replace" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("SecretItemCreateFlags"), values);
    }
    return etype;
}

#include "secret-schema.h"
/* enumerations from "secret-schema.h" */
GType secret_schema_attribute_type_get_type (void) G_GNUC_CONST;

GType
secret_schema_attribute_type_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { SECRET_SCHEMA_ATTRIBUTE_STRING, "SECRET_SCHEMA_ATTRIBUTE_STRING", "string" },
            { SECRET_SCHEMA_ATTRIBUTE_INTEGER, "SECRET_SCHEMA_ATTRIBUTE_INTEGER", "integer" },
            { SECRET_SCHEMA_ATTRIBUTE_BOOLEAN, "SECRET_SCHEMA_ATTRIBUTE_BOOLEAN", "boolean" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("SecretSchemaAttributeType"), values);
    }
    return etype;
}

GType secret_schema_flags_get_type (void) G_GNUC_CONST;

GType
secret_schema_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { SECRET_SCHEMA_NONE, "SECRET_SCHEMA_NONE", "none" },
            { SECRET_SCHEMA_DONT_MATCH_NAME, "SECRET_SCHEMA_DONT_MATCH_NAME", "dont-match-name" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("SecretSchemaFlags"), values);
    }
    return etype;
}

#include "secret-service.h"
/* enumerations from "secret-service.h" */
GType secret_service_flags_get_type (void) G_GNUC_CONST;

GType
secret_service_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { SECRET_SERVICE_NONE, "SECRET_SERVICE_NONE", "none" },
            { SECRET_SERVICE_OPEN_SESSION, "SECRET_SERVICE_OPEN_SESSION", "open-session" },
            { SECRET_SERVICE_LOAD_COLLECTIONS, "SECRET_SERVICE_LOAD_COLLECTIONS", "load-collections" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("SecretServiceFlags"), values);
    }
    return etype;
}

GType secret_search_flags_get_type (void) G_GNUC_CONST;

GType
secret_search_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { SECRET_SEARCH_NONE, "SECRET_SEARCH_NONE", "none" },
            { SECRET_SEARCH_ALL, "SECRET_SEARCH_ALL", "all" },
            { SECRET_SEARCH_UNLOCK, "SECRET_SEARCH_UNLOCK", "unlock" },
            { SECRET_SEARCH_LOAD_SECRETS, "SECRET_SEARCH_LOAD_SECRETS", "load-secrets" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("SecretSearchFlags"), values);
    }
    return etype;
}

#include "secret-types.h"
/* enumerations from "secret-types.h" */
GType secret_error_get_type (void) G_GNUC_CONST;

GType
secret_error_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { SECRET_ERROR_PROTOCOL, "SECRET_ERROR_PROTOCOL", "protocol" },
            { SECRET_ERROR_IS_LOCKED, "SECRET_ERROR_IS_LOCKED", "is-locked" },
            { SECRET_ERROR_NO_SUCH_OBJECT, "SECRET_ERROR_NO_SUCH_OBJECT", "no-such-object" },
            { SECRET_ERROR_ALREADY_EXISTS, "SECRET_ERROR_ALREADY_EXISTS", "already-exists" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("SecretError"), values);
    }
    return etype;
}

 /**/

/* Generated data ends here */


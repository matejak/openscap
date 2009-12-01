/*
 * Copyright 2008 Red Hat Inc., Durham, North Carolina.
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
 *      "David Niemoller" <David.Niemoller@g2-inc.com>
 */

#ifndef OVAL_TYPES_H_
#define OVAL_TYPES_H_

/**
 * @file
 * OVAL agent API.
 * @author "David Niemoller" <David.Niemoller@g2-inc.com>
 * addtogroup OVAL
 * @{
 */


/// OVAL family
typedef enum {
	/**
	 * Unknown platform
	 * @see oval_subtype_t
	 */
	OVAL_FAMILY_UNKNOWN = 0,
	/**
	 * AIX family
	 * @see oval_aix_subtype_t
	 */
	OVAL_FAMILY_AIX = 1000,
	/**
	 * Apache family
	 * @see oval_apache_subtype_t
	 */
	OVAL_FAMILY_APACHE = 2000,
	/**
	 * CatOS family
	 * @see oval_catos_subtype_t
	 */
	OVAL_FAMILY_CATOS = 3000,
	/**
	 * ESX family
	 * @see oval_esx_subtype_t
	 */
	OVAL_FAMILY_ESX = 4000,
	/**
	 * FreeBSD family
	 * @see oval_freebsd_subtype_t
	 */
	OVAL_FAMILY_FREEBSD = 5000,
	/**
	 * HPUX family
	 * @see oval_hpux_subtype_t
	 */
	OVAL_FAMILY_HPUX = 6000,
	/**
	 * Platform independent family
	 * @see oval_independent_subtype_t
	 */
	OVAL_FAMILY_INDEPENDENT = 7000,
	/**
	 * IOS family
	 * @see oval_ios_subtype_t
	 */
	OVAL_FAMILY_IOS = 8000,
	/**
	 * Linux family
	 * @see oval_linux_subtype_t
	 */
	OVAL_FAMILY_LINUX = 9000,
	/**
	 * MacOS family
	 * @see oval_macos_subtype_t
	 */
	OVAL_FAMILY_MACOS = 10000,
	/**
	 * PIXOS family
	 * @see oval_pixos_subtype_t
	 */
	OVAL_FAMILY_PIXOS = 11000,
	/**
	 * Solaris family
	 * @see oval_solaris_subtype_t
	 */
	OVAL_FAMILY_SOLARIS = 12000,
	/**
	 * Unix family
	 * @see oval_unix_subtype_t
	 */
	OVAL_FAMILY_UNIX = 13000,
	/**
	 * Windows family
	 * @see oval_windows_subtype_t
	 */
	OVAL_FAMILY_WINDOWS = 14000
} oval_family_t;

/// Unknown subtypes
typedef enum {
	OVAL_SUBTYPE_UNKNOWN = 0,
	OVAL_SUBTYPE_ALL     = 1
} oval_subtype_t;

/// AIX subtypes
typedef enum {
	OVAL_AIX_FILESET = 1001,
	OVAL_AIX_FIX = OVAL_FAMILY_AIX + 2,
	OVAL_AIX_OSLEVEL = OVAL_FAMILY_AIX + 3
} oval_aix_subtype_t;

/// Apache subtypes
typedef enum {
	OVAL_APACHE_HTTPD = OVAL_FAMILY_APACHE + 1,
	OVAL_APACHE_VERSION = OVAL_FAMILY_APACHE + 2
} oval_apache_subtype_t;

/// CatOS subtypes
typedef enum {
	OVAL_CATOS_LINE = OVAL_FAMILY_CATOS + 1,
	OVAL_CATOS_MODULE = OVAL_FAMILY_CATOS + 2,
	OVAL_CATOS_VERSION_55 = OVAL_FAMILY_CATOS + 3,
	OVAL_CATOS_VERSION = OVAL_FAMILY_CATOS + 4
} oval_catos_subtype_t;

/// ESX subtypes
typedef enum {
	OVAL_ESX_PATCH = OVAL_FAMILY_ESX + 1,
	OVAL_ESX_VERSION = OVAL_FAMILY_ESX + 2
} oval_esx_subtype_t;

/// FreeBSD subtypes
typedef enum {
	OVAL_FREEBSD_PORT_INFO = OVAL_FAMILY_FREEBSD + 1
} oval_freebsd_subtype_t;

/// HPUX subtypes
typedef enum {
	OVAL_HPUX_GETCONF = OVAL_FAMILY_HPUX + 1,
	OVAL_HPUX_PATCH_53 = OVAL_FAMILY_HPUX + 2,
	OVAL_HPUX_PATCH = OVAL_FAMILY_HPUX + 3,
	OVAL_HPUX_SOFTWARE_LIST = OVAL_FAMILY_HPUX + 4,
	OVAL_HPUX_TRUSTED_ACCOUNTS = OVAL_FAMILY_HPUX + 5
} oval_hpux_subtype_t;

/// Platform independent subtypes
typedef enum {
	OVAL_INDEPENDENT_FAMILY = OVAL_FAMILY_INDEPENDENT + 1,
	OVAL_INDEPENDENT_FILE_MD5 = OVAL_FAMILY_INDEPENDENT + 2,
	OVAL_INDEPENDENT_FILE_HASH = OVAL_FAMILY_INDEPENDENT + 3,
	OVAL_INDEPENDENT_ENVIRONMENT_VARIABLE = OVAL_FAMILY_INDEPENDENT + 4,
	OVAL_INDEPENDENT_SQL = OVAL_FAMILY_INDEPENDENT + 5,
	OVAL_INDEPENDENT_TEXT_FILE_CONTENT_54 = OVAL_FAMILY_INDEPENDENT + 6,
	OVAL_INDEPENDENT_TEXT_FILE_CONTENT = OVAL_FAMILY_INDEPENDENT + 7,
	OVAL_INDEPENDENT_UNKNOWN = OVAL_FAMILY_INDEPENDENT + 8,
	OVAL_INDEPENDENT_VARIABLE = OVAL_FAMILY_INDEPENDENT + 9,
	OVAL_INDEPENDENT_XML_FILE_CONTENT = OVAL_FAMILY_INDEPENDENT + 10
} oval_independent_subtype_t;

/// IOS subtypes
typedef enum {
	OVAL_IOS_GLOBAL = OVAL_FAMILY_IOS + 1,
	OVAL_IOS_INTERFACE = OVAL_FAMILY_IOS + 2,
	OVAL_IOS_LINE = OVAL_FAMILY_IOS + 3,
	OVAL_IOS_SNMP = OVAL_FAMILY_IOS + 4,
	OVAL_IOS_TCLSH = OVAL_FAMILY_IOS + 5,
	OVAL_IOS_VERSION_55 = OVAL_FAMILY_IOS + 6
} oval_ios_subtype_t;

/// Linux subtypes
typedef enum {
	OVAL_LINUX_DPKG_INFO = OVAL_FAMILY_LINUX + 1,
	OVAL_LINUX_INET_LISTENING_SERVERS = OVAL_FAMILY_LINUX + 2,
	OVAL_LINUX_RPM_INFO = OVAL_FAMILY_LINUX + 3,
	OVAL_LINUX_SLACKWARE_PKG_INFO_TEST = OVAL_FAMILY_LINUX + 4
} oval_linux_subtype_t;

/// MacOS subtypes
typedef enum {
	OVAL_MACOS_ACCOUNT_INFO = OVAL_FAMILY_MACOS + 1,
	OVAL_MACOS_INET_LISTENING_SERVERS = OVAL_FAMILY_MACOS + 2,
	OVAL_MACOS_NVRAM_INFO = OVAL_FAMILY_MACOS + 3,
	OVAL_MACOS_PWPOLICY = OVAL_FAMILY_MACOS + 4
} oval_macos_subtype_t;

/// PIXOS subtypes
typedef enum {
	OVAL_PIXOS_LINE = OVAL_FAMILY_PIXOS + 1,
	OVAL_PIXOS_VERSION = OVAL_FAMILY_PIXOS + 2
} oval_pixos_subtype_t;

/// Solaris subtypes
typedef enum {
	OVAL_SOLARIS_ISAINFO = OVAL_FAMILY_SOLARIS + 1,
	OVAL_SOLARIS_PACKAGE = OVAL_FAMILY_SOLARIS + 2,
	OVAL_SOLARIS_PATCH = OVAL_FAMILY_SOLARIS + 3,
	OVAL_SOLARIS_SMF = OVAL_FAMILY_SOLARIS + 4
} oval_solaris_subtype_t;

/// Unix subtypes
typedef enum {
	OVAL_UNIX_FILE = OVAL_FAMILY_UNIX + 1,
	OVAL_UNIX_INETD = OVAL_FAMILY_UNIX + 2,
	OVAL_UNIX_INTERFACE = OVAL_FAMILY_UNIX + 3,
	OVAL_UNIX_PASSWORD = OVAL_FAMILY_UNIX + 4,
	OVAL_UNIX_PROCESS = OVAL_FAMILY_UNIX + 5,
	OVAL_UNIX_RUNLEVEL = OVAL_FAMILY_UNIX + 6,
	OVAL_UNIX_SCCS = OVAL_FAMILY_UNIX + 7,
	OVAL_UNIX_SHADOW = OVAL_FAMILY_UNIX + 8,
	OVAL_UNIX_UNAME = OVAL_FAMILY_UNIX + 9,
	OVAL_UNIX_XINETD = OVAL_FAMILY_UNIX + 10
} oval_unix_subtype_t;

/// Windows subtypes
typedef enum {
	OVAL_WINDOWS_ACCESS_TOKEN = OVAL_FAMILY_WINDOWS                  +  1,
	OVAL_WINDOWS_ACTIVE_DIRECTORY = OVAL_FAMILY_WINDOWS              +  2,
	OVAL_WINDOWS_AUDIT_EVENT_POLICY = OVAL_FAMILY_WINDOWS            +  3,
	OVAL_WINDOWS_AUDIT_EVENT_SUBCATEGORIES = OVAL_FAMILY_WINDOWS     +  4,
	OVAL_WINDOWS_FILE = OVAL_FAMILY_WINDOWS                          +  5,
	OVAL_WINDOWS_FILE_AUDITED_PERMISSIONS_53 = OVAL_FAMILY_WINDOWS   +  6,
	OVAL_WINDOWS_FILE_AUDITED_PERMISSIONS = OVAL_FAMILY_WINDOWS      +  7,
	OVAL_WINDOWS_FILE_EFFECTIVE_RIGHTS_53 = OVAL_FAMILY_WINDOWS      +  8,
	OVAL_WINDOWS_FILE_EFFECTIVE_RIGHTS = OVAL_FAMILY_WINDOWS         +  9,
	OVAL_WINDOWS_GROUP = OVAL_FAMILY_WINDOWS                         + 10,
	OVAL_WINDOWS_GROUP_SID = OVAL_FAMILY_WINDOWS                     + 11,
	OVAL_WINDOWS_INTERFACE = OVAL_FAMILY_WINDOWS                     + 12,
	OVAL_WINDOWS_LOCKOUT_POLICY = OVAL_FAMILY_WINDOWS                + 13,
	OVAL_WINDOWS_METABASE = OVAL_FAMILY_WINDOWS                      + 14,
	OVAL_WINDOWS_PASSWORD_POLICY = OVAL_FAMILY_WINDOWS               + 15,
	OVAL_WINDOWS_PORT = OVAL_FAMILY_WINDOWS                          + 16,
	OVAL_WINDOWS_PRINTER_EFFECTIVE_RIGHTS = OVAL_FAMILY_WINDOWS      + 17,
	OVAL_WINDOWS_PROCESS = OVAL_FAMILY_WINDOWS                       + 18,
	OVAL_WINDOWS_REGISTRY = OVAL_FAMILY_WINDOWS                      + 19,
	OVAL_WINDOWS_REGKEY_AUDITED_PERMISSIONS_53 = OVAL_FAMILY_WINDOWS + 20,
	OVAL_WINDOWS_REGKEY_AUDITED_PERMISSIONS = OVAL_FAMILY_WINDOWS    + 21,
	OVAL_WINDOWS_REGKEY_EFFECTIVE_RIGHTS_53 = OVAL_FAMILY_WINDOWS    + 22,
	OVAL_WINDOWS_REGKEY_EFFECTIVE_RIGHTS = OVAL_FAMILY_WINDOWS       + 23,
	OVAL_WINDOWS_SHARED_RESOURCE = OVAL_FAMILY_WINDOWS               + 24,
	OVAL_WINDOWS_SID = OVAL_FAMILY_WINDOWS                           + 25,
	OVAL_WINDOWS_SID_SID = OVAL_FAMILY_WINDOWS                       + 26,
	OVAL_WINDOWS_USER_ACCESS_CONTROL = OVAL_FAMILY_WINDOWS           + 27,
	OVAL_WINDOWS_USER = OVAL_FAMILY_WINDOWS                          + 28,
	OVAL_WINDOWS_USER_SID_55 = OVAL_FAMILY_WINDOWS                   + 29,
	OVAL_WINDOWS_USER_SID = OVAL_FAMILY_WINDOWS                      + 30,
	OVAL_WINDOWS_VOLUME = OVAL_FAMILY_WINDOWS                        + 31,
	OVAL_WINDOWS_WMI = OVAL_FAMILY_WINDOWS                           + 32,
	OVAL_WINDOWS_WUA_UPDATE_SEARCHER = OVAL_FAMILY_WINDOWS           + 33
} oval_windows_subtype_t;

/**
 * @struct oval_export_target
 * Specification of XML export target.
 */
struct oval_export_target;
/**
 * @struct oval_import_source;
 * Specification of XML import source.
 */
struct oval_import_source;

/// severity level
typedef enum {
	XML_VALIDITY_WARNING = 1,
	XML_VALIDITY_ERROR   = 2,
	XML_WARNING          = 3,
	XML_ERROR            = 4,
	OVAL_LOG_INFO        = 15,
	OVAL_LOG_DEBUG       = 16,
	OVAL_LOG_WARN        = 17
} oval_xml_severity_t;

struct oval_xml_error {
	void *user_arg;
	char *message;
	oval_xml_severity_t severity;
	int line_number;
	char *system_id;
};

/// OVAL XML error handler function pointer type.
typedef int (*oval_xml_error_handler) (struct oval_xml_error *, void *user_arg);

/**
 * Create an import source from filename.
 * Return an import_source that streams from a designated file.
 * @param filename the name of the designated file
 */
struct oval_import_source *oval_import_source_new_file(char *filename);

/** free a specified import_source.
 * @param source the specified import_source
 */
void oval_import_source_free(
		struct oval_import_source *source);

/** create export_target object.
 * Return the created export_target object.
 * @param filename the name of the target output file
 * @param encoding the target XML encoding.
 */
struct oval_export_target *oval_export_target_new_file(char *filename, char* encoding);

/** free an export_target object.
 * @param target the target to be freed.
 */
void oval_export_target_free(struct oval_export_target *target);


/**
 * @struct oval_variable_model
 * OVAL variable model.
 * The OVAL variable model facilitates access to external variable value bindings used to to constrain the evaluation of OVAL objects.
 */
struct oval_variable_model;

/**
 * @struct oval_syschar_model
 * OVAL System Characteristics model.
 * Object model holds OVAL system characteristics
 * structure instances.
 */
struct oval_syschar_model;

/**
 * @struct oval_results_model
 * OVAL Results Model.
 * Object model holds OVAL results
 * structure instances.
 */
struct oval_results_model;


struct oval_sysinfo *oval_sysinfo_probe (void);

struct oval_string_iterator;

int   oval_string_iterator_has_more(struct oval_string_iterator *);
char *oval_string_iterator_next    (struct oval_string_iterator *);
void  oval_string_iterator_free    (struct oval_string_iterator *);
/**
 * @}ENDOVAL
 */

#endif /* OVAL_TYPES_H_ */

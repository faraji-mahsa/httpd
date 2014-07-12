/* Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file  ap_config_layout.h
 * @brief Apache Config Layout
 */

#ifndef AP_CONFIG_LAYOUT_H
#define AP_CONFIG_LAYOUT_H

/* Configured Apache directory layout */
#define DEFAULT_PREFIX "/usr"
#define DEFAULT_EXP_EXEC_PREFIX "/usr"
#define DEFAULT_REL_EXEC_PREFIX ""
#define DEFAULT_EXP_BINDIR "/usr/bin"
#define DEFAULT_REL_BINDIR "bin"
#define DEFAULT_EXP_SBINDIR "/usr/sbin"
#define DEFAULT_REL_SBINDIR "sbin"
#define DEFAULT_EXP_LIBEXECDIR "/usr/lib64/httpd/modules"
#define DEFAULT_REL_LIBEXECDIR "lib64/httpd/modules"
#define DEFAULT_EXP_MANDIR "/usr/share/man"
#define DEFAULT_REL_MANDIR "share/man"
#define DEFAULT_EXP_SYSCONFDIR "/etc/httpd/conf"
#define DEFAULT_REL_SYSCONFDIR "/etc/httpd/conf"
#define DEFAULT_EXP_DATADIR "/var/www"
#define DEFAULT_REL_DATADIR "/var/www"
#define DEFAULT_EXP_INSTALLBUILDDIR "/usr/lib64/httpd/build"
#define DEFAULT_REL_INSTALLBUILDDIR "lib64/httpd/build"
#define DEFAULT_EXP_ERRORDIR "/var/www/error"
#define DEFAULT_REL_ERRORDIR "/var/www/error"
#define DEFAULT_EXP_ICONSDIR "/var/www/icons"
#define DEFAULT_REL_ICONSDIR "/var/www/icons"
#define DEFAULT_EXP_HTDOCSDIR "/var/www/html"
#define DEFAULT_REL_HTDOCSDIR "/var/www/html"
#define DEFAULT_EXP_MANUALDIR "/var/www/manual"
#define DEFAULT_REL_MANUALDIR "/var/www/manual"
#define DEFAULT_EXP_CGIDIR "/var/www/cgi-bin"
#define DEFAULT_REL_CGIDIR "/var/www/cgi-bin"
#define DEFAULT_EXP_INCLUDEDIR "/usr/include/httpd"
#define DEFAULT_REL_INCLUDEDIR "include/httpd"
#define DEFAULT_EXP_LOCALSTATEDIR "/var"
#define DEFAULT_REL_LOCALSTATEDIR "/var"
#define DEFAULT_EXP_RUNTIMEDIR "/var/run"
#define DEFAULT_REL_RUNTIMEDIR "/var/run"
#define DEFAULT_EXP_LOGFILEDIR "/var/log/httpd"
#define DEFAULT_REL_LOGFILEDIR "/var/log/httpd"
#define DEFAULT_EXP_PROXYCACHEDIR "/var/cache/httpd/cache-root"
#define DEFAULT_REL_PROXYCACHEDIR "/var/cache/httpd/cache-root"

#endif /* AP_CONFIG_LAYOUT_H */

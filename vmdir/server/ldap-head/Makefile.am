#
# Copyright (c) VMware Inc.  All rights Reserved.
# Module Name: ldap-head Makefile
# Abstract: VMware Cloud Directory Platform.
# Created on: Oct 4, 2011
# Author: Sanjay Jain (sanjain@vmware.com)
#         Sriram Nambakam (snambakam@vmware.com)
#

noinst_LTLIBRARIES = libldap-head.la

libldap_head_la_SOURCES = \
    add.c           \
    bind.c          \
    connection.c    \
    controls.c      \
    delete.c        \
    filter.c        \
    globals.c       \
    modify.c        \
    openssl.c       \
    operation.c     \
    opstatistic.c   \
    result.c        \
    search.c        \
    unbind.c

libldap_head_la_CPPFLAGS = \
    -I$(top_srcdir)/include \
    -I$(top_srcdir)/include/public \
    -I$(top_srcdir)/thirdparty/openldap/include \
    -I$(top_srcdir)/thirdparty/openldap/libraries/liblber \
    -I$(top_srcdir)/thirdparty/openldap/libraries/libldap \
    -I$(top_srcdir)/server/include \
    @OPENSSL_INCLUDES@ \
    @BDB_INCLUDES@ \
    @LW_INCLUDES@

libldap_head_la_LDFLAGS = \
    -static


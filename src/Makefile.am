AM_CPPFLAGS = -D__STDC_INT64__

#if USE_SUBMODULES
#SUBDIRS = ../glitter
#AM_CPPFLAGS += -I $(top_srcdir)/glitter/src
#
#SUBDIRS += ../restart
#AM_CPPFLAGS += -I $(top_srcdir)/restart/src
#endif

lib_LTLIBRARIES =
include_HEADERS = ezudp.h
bin_PROGRAMS    =

include Makefile-LIBADD.inc

lib_LTLIBRARIES += libezudp-client.la
libezudp_client_la_LIBADD = $(LIBEZUDP_CLIENT_LIBADD)
include_HEADERS += ezudp-client.h

lib_LTLIBRARIES += libezudp-server.la
libezudp_server_la_LIBADD = $(LIBEZUDP_SERVER_LIBADD)
include_HEADERS += ezudp-server.h

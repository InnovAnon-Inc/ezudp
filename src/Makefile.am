lib_LTLIBRARIES = libezudp-client.la libezudp-server.la
libezudp_client_la_SOURCES = ezudp-client.c
libezudp_server_la_SOURCES = ezudp-server.c
libezudp_client_la_LIBADD = -lrestart
libezudp_server_la_LIBADD = -lrestart
include_HEADERS	= ezudp-client.h ezudp-server.h ezudp.h

#libezudp_client_la_CFLAGS =
#libezudp_server_la_CFLAGS =

AM_CPPFLAGS = -D__STDC_INT64__

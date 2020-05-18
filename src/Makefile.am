AM_CPPFLAGS = -D__STDC_INT64__

lib_LTLIBRARIES =
include_HEADERS =
bin_PROGRAMS =

lib_LTLIBRARIES += libezudp-client.la
libezudp_client_la_CPPFLAGS = $(NETWORK_CLIENT_CFLAGS) $(RESTART_CFLAGS)
libezudp_client_la_LIBADD   = $(NETWORK_CLIENT_LIBS)   $(RESTART_LIBS)
include_HEADERS += ezudp-client.h
 
lib_LTLIBRARIES += libezudp-server.la
libezudp_server_la_CPPFLAGS = $(NETWORK_SERVER_CFLAGS) $(RESTART_CFLAGS)
libezudp_server_la_LIBADD   = $(NETWORK_SERVER_LIBS)   $(RESTART_LIBS)
include_HEADERS += ezudp-server.h

bin_PROGRAMS += ezudp-client-test
ezudp_client_test_CPPFLAGS =                $(NETWORK_CFLAGS) $(NETWORK_CLIENT_CFLAGS) $(RESTART_CFLAGS)
ezudp_client_test_LDADD    = -lezudp-client $(NETWORK_LIBS)   $(NETWORK_CLIENT_LIBS)   $(RESTART_LIBS)
EXTRA_ezudp_client_test_DEPENDENCIES = libezudp-client.la

bin_PROGRAMS += ezudp-server-test
ezudp_server_test_CPPFLAGS =                $(NETWORK_CFLAGS) $(NETWORK_SERVER_CFLAGS) $(RESTART_CFLAGS)
ezudp_server_test_LDADD    = -lezudp-server $(NETWORK_LIBS)   $(NETWORK_SERVER_LIBS)   $(RESTART_LIBS)
EXTRA_ezudp_server_test_DEPENDENCIES = libezudp-server.la


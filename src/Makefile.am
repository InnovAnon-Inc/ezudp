AM_CPPFLAGS = -D__STDC_INT64__

lib_LTLIBRARIES =
include_HEADERS =
bin_PROGRAMS = ezudp-client-test ezudp-server-test

dist_bin_SCRIPTS = libezudp_client_config libezudp_server_config

lib_LTLIBRARIES += libezudp-client.la
libezudp_client_la_LIBADD = @LIBEZUDP_CLIENT_LIBADD@
include_HEADERS += ezudp-client.h

lib_LTLIBRARIES += libezudp-server.la
libezudp_server_la_LIBADD = @LIBEZUDP_SERVER_LIBADD@
include_HEADERS += ezudp-server.h

ezudp_client_test_LDADD = @EZUDP_CLIENT_TEST_LIBADD@
EXTRA_ezudp_client_test_DEPENDENCIES = libezudp-client.la

ezudp_server_test_LDADD = @EZUDP_SERVER_TEST_LIBADD@
EXTRA_ezudp_server_test_DEPENDENCIES = libezudp-server.la


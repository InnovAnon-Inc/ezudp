# Install the pkg-config file.
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = src/libezudp-client.pc src/libezudp-server.pc src/ezudp-client-test.pc src/ezudp-server-test.pc

DISTCLEANFILES = $(pkgconfig_DATA)
EXTRA_DIST = src/libezudp-client.pc.in src/libezudp-server.pc.in src/ezudp-client-test.pc.in src/ezudp-server-test.pc.in

SUBDIRS = src
dist_doc_DATA = README.md
ACLOCAL_AMFLAGS = -I m4


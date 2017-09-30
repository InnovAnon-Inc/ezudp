include $(top_srcdir)/restart/src/Makefile-LIBADD.inc
LIBEZUDP_CLIENT_LIBADD = ../restart/src/.libs/librestart.la $(LIBRESTART_LIBADD)

#include $(top_srcdir)/restart/src/Makefile-LIBADD.inc
LIBEZUDP_SERVER_LIBADD = ../restart/src/.libs/librestart.la $(LIBRESTART_LIBADD)

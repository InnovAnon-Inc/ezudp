#include $(top_srcdir)/restart/src/Makefile-LIBADD.inc
#include $(top_srcdir)/restart/src/Makefile-LIBADD.inc
include ../restart/src/Makefile-LIBADD.inc

#if USE_SUBMODULES
#LIBEZUDP_CLIENT_LIBADD = ../restart/src/.libs/librestart.la $(LIBRESTART_LIBADD)
#LIBEZUDP_SERVER_LIBADD = ../restart/src/.libs/librestart.la $(LIBRESTART_LIBADD)
#else
LIBEZUDP_CLIENT_LIBADD = -lrestart $(LIBRESTART_LIBADD)
LIBEZUDP_SERVER_LIBADD = -lrestart $(LIBRESTART_LIBADD)
#endif

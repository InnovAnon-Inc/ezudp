AC_INIT([libezudp], [0.0], [laurence.a.maddox@gmail.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AM_PROG_AR
LT_INIT([])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SUBDIRS([glitter restart])

AC_CHECK_HEADERS([stdint.h strings.h unistd.h])
AC_CHECK_HEADERS([arpa/inet.h netinet/in.h sys/types.h sys/socket.h])
AC_CHECK_HEADERS([restart.h glitter.h])

AC_CHECK_LIB([restart],[r_close])

INNOVANON_WARNINGS([])

AC_OUTPUT

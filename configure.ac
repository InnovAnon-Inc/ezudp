AC_INIT([libezudp], [1.0], [InnovAnon-Inc@protonmail.com])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AM_PROG_AR
LT_INIT([])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
 src/libezudp-client.pc
 src/libezudp-server.pc
 src/ezudp-client-test.pc
 src/ezudp-server-test.pc
])

PKG_PROG_PKG_CONFIG

AC_ARG_ENABLE([use-submodules],
    AS_HELP_STRING([--enable-use-submodules], [Enable use submodules]))
AM_CONDITIONAL([USE_SUBMODULES], [test x"$enable_use_submodules" = "xyes"])

AC_CONFIG_MACRO_DIR([m4])

AC_CHECK_HEADERS([stdint.h strings.h unistd.h])
AC_CHECK_HEADERS([arpa/inet.h netinet/in.h sys/types.h sys/socket.h])
#AC_CHECK_HEADERS([restart.h glitter.h])

#AC_CHECK_LIB([restart],[r_close])

PKG_CHECK_MODULES([GLITTER],[glitter],,)
PKG_CHECK_MODULES([NETWORK],[libnetwork],,)
PKG_CHECK_MODULES([NETWORK_SERVER],[libnetwork-server],,)
PKG_CHECK_MODULES([RESTART],[librestart],,)
PKG_CHECK_MODULES([NETWORK_CLIENT],[libnetwork-client],,)

INNOVANON_WARNINGS([])

AC_OUTPUT


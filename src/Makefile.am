lib_LTLIBRARIES = libezudp-client.la libezudp-server.la
libezudp_client_la_SOURCES = ezudp-client.c
libezudp_server_la_SOURCES = ezudp-server.c
libezudp_client_la_LDFLAGS = -lrestart
libezudp_server_la_LDFLAGS = -lrestart
include_HEADERS	= ezudp-client.h ezudp-server.h ezudp.h

libezudp_client_la_CFLAGS = -Wextra -pedantic -ansi -Werror -Wdouble-promotion \
                   -Wformat=2 -Wswitch-default -Wswitch-enum -Wuninitialized \
                   -Wstrict-aliasing=1 -Wstrict-overflow=5 \
                   -Wsuggest-attribute=pure -Wsuggest-attribute=const \
                   -Wsuggest-attribute=noreturn -Wsuggest-attribute=format \
                   -Warray-bounds=2 -Wtrampolines -Wfloat-equal \
                   -Wtraditional-conversion -Wdeclaration-after-statement \
                   -Wundef -Wshadow -Wunsafe-loop-optimizations \
                   -Wbad-function-cast -Wcast-qual -Wcast-align \
                   -Wwrite-strings -Wconversion -Wjump-misses-init \
                   -Wlogical-op -Waggregate-return \
                   -Wno-aggressive-loop-optimizations -Wstrict-prototypes \
                   -Wmissing-prototypes -Wmissing-declarations -Wpacked \
                   -Wpadded -Wredundant-decls -Wnested-externs -Winline \
                   -Wvector-operation-performance -Wdisabled-optimization \
                   -Wstack-protector -Wunsuffixed-float-constants \
                   -Winit-self
libezudp_server_la_CFLAGS = -Wextra -pedantic -ansi -Werror -Wdouble-promotion \
                   -Wformat=2 -Wswitch-default -Wswitch-enum -Wuninitialized \
                   -Wstrict-aliasing=3 -Wstrict-overflow=5 \
                   -Wsuggest-attribute=pure -Wsuggest-attribute=const \
                   -Wsuggest-attribute=noreturn -Wsuggest-attribute=format \
                   -Warray-bounds=2 -Wtrampolines -Wfloat-equal \
                   -Wtraditional-conversion -Wdeclaration-after-statement \
                   -Wundef -Wshadow -Wunsafe-loop-optimizations \
                   -Wbad-function-cast -Wcast-qual -Wcast-align \
                   -Wwrite-strings -Wconversion -Wjump-misses-init \
                   -Wlogical-op -Waggregate-return \
                   -Wno-aggressive-loop-optimizations -Wstrict-prototypes \
                   -Wmissing-prototypes -Wmissing-declarations -Wpacked \
                   -Wpadded -Wredundant-decls -Wnested-externs -Winline \
                   -Wvector-operation-performance -Wdisabled-optimization \
                   -Wstack-protector -Wunsuffixed-float-constants \
                   -Winit-self

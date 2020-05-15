#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <restart.h>

#include <ezudp-server.h>

__attribute__ ((nonnull (2), warn_unused_result))
static int cb (socket_t s, struct sockaddr_in *restrict cli,
   void *restrict args) {
   error_check (readwrite (s, s) == -1) return -1;
   return 0;
}

int main () {
   uint16_t port = 12345;
   uint32_t addr = 0;
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wtraditional-conversion"
   error_check (ezudp_server (port, addr, cb, NULL) != 0) return EXIT_FAILURE;
	#pragma GCC diagnostic pop
   return EXIT_SUCCESS;
}

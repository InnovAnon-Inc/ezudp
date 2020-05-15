#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <restart.h>

#include <ezudp-client.h>

__attribute__ ((nonnull (2), warn_unused_result))
static int cb (socket_t s, struct sockaddr_in *restrict cli,
   void *restrict args) {
   char out[] = "Hello, World!";
   char in [1024];
#ifndef NDEBUG
   puts (out);
#endif
   error_check (r_write (s, out, sizeof (out)) != sizeof (out)) return -1;
#ifndef NDEBUG
   puts (out);
#endif
   error_check (r_read  (s, in,  sizeof (in))  != sizeof (out)) return -2;
   puts (in);
   return 0;
}

int main () {
   uint16_t port = 12345;
   /*char const addr[] = "localhost";*/
   char const addr[] = "127.0.0.1";
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wtraditional-conversion"
   error_check (ezudp_client (port, addr, cb, NULL) != 0) return EXIT_FAILURE;
	#pragma GCC diagnostic pop
   return EXIT_SUCCESS;
}

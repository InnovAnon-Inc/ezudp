#if HAVE_CONFIG_H
#include <config.h>
#endif

/*#define _BSD_SOURCE*/

#include <strings.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>

#include <restart.h>

#include <ezudp-client.h>

/*extern int inet_aton(const char *cp, struct in_addr *inp) ;*/

__attribute__ ((nonnull (2, 3), warn_unused_result))
int ezudp_client (
   uint16_t port, char const addr[],
   ezudp_clientcb_t cb,
   void *restrict cb_args) {
   struct sockaddr_in si_other;

   const socket_t s = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);
   error_check (s == -1) return -1;

   bzero (&si_other, sizeof (si_other));
   si_other.sin_family = AF_INET;
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wtraditional-conversion"
   si_other.sin_port = htons (port);
	#pragma GCC diagnostic pop

   error_check (inet_aton (addr, &si_other.sin_addr) == 0) {
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wunused-result"
      r_close (s);
   #pragma GCC diagnostic pop
      return -2;
   }

   error_check (cb (s, &si_other, cb_args) != 0) {
   #pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wunused-result"
      r_close (s);
   #pragma GCC diagnostic pop
      return -3;
   }

   error_check (r_close (s) == -1) return -4;

   return 0;
}

#if HAVE_CONFIG_H
#include <config.h>
#endif

#define inline __inline__

#include <strings.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <restart.h>

#include <ezudp-server.h>

__attribute__ ((nonnull (3), warn_unused_result))
int ezudp_server (
   uint16_t port, uint32_t addr,
   ezudp_servercb_t cb, void *restrict cb_args) {
   struct sockaddr_in si_me;

   const socket_t s = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);
   error_check (s == -1) return -1;

   bzero (&si_me, sizeof (si_me));
   si_me.sin_family = AF_INET;
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wtraditional-conversion"
   si_me.sin_port = htons (port);
	#pragma GCC diagnostic pop
   si_me.sin_addr.s_addr = htonl (addr);

   TODO (type-punned pointers and strict-aliasing ?)
   #pragma GCC diagnostic push
   /*#pragma GCC diagnostic error "-Wstrict-aliasing=3"*/
   #pragma GCC diagnostic error "-Wstrict-aliasing"
   error_check (bind (s, (struct sockaddr *) &si_me, (socklen_t) sizeof (si_me)) == -1) {
   #pragma GCC diagnostic pop
   #pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wunused-result"
      r_close (s);
   #pragma GCC diagnostic pop
      return -2;
   }

   error_check (cb (s, cb_args) != 0) {
   #pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wunused-result"
      r_close (s);
   #pragma GCC diagnostic pop
      return -3;
   }

   error_check (r_close (s) == -1) return -4;

   return 0;
}

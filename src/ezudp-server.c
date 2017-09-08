#include <strings.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <arpa/inet.h>
#include <netinet/in.h>

#include <restart.h>

#include "ezudp-server.h"

int ezudp_server (
   uint16_t port, uint32_t addr,
   int (*cb) (socket_t, void *), void *cb_args) {
   struct sockaddr_in si_me;

   const socket_t s = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);
   if (s == -1) return -1;

   bzero (&si_me, sizeof (si_me));
   si_me.sin_family = AF_INET;
   si_me.sin_port = htons (port);
   si_me.sin_addr.s_addr = htonl (addr);

   /* TODO type-punned pointers and strict-aliasing ? */
   if (bind (s, (struct sockaddr *) &si_me, (socklen_t) sizeof (si_me)) == -1) {
      r_close (s);
      return -2;
   }

   if (cb (s, cb_args) != 0) {
      r_close (s);
      return -3;
   }

   if (r_close (s) == -1) return -4;

   return 0;
}

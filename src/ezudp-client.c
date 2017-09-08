#include <strings.h>
#include <unistd.h>

#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>

#include <restart.h>

#include "ezudp-client.h"

int ezudp_client (
   short port, const char *addr,
   int (*cb) (socket_t, struct sockaddr_in *, void *), void *cb_args) {
   struct sockaddr_in si_other;

   const socket_t s = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);
   if (s == -1) return -1;

   bzero (&si_other, sizeof (si_other));
   si_other.sin_family = AF_INET;
   si_other.sin_port = htons (port);

   if (inet_aton (addr, &si_other.sin_addr) == 0) {
      r_close (s);
      return -2;
   }

   if (cb (s, &si_other, cb_args) != 0) {
      r_close (s);
      return -3;
   }

   if (r_close (s) == -1) return -4;

   return 0;
}

#ifndef _EZUDP_CLIENT_H_
#define _EZUDP_CLIENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <network.h>

typedef __attribute__ ((nonnull (2), warn_unused_result))
int (*ezudp_clientcb_t) (socket_t, struct sockaddr_in *restrict,
   void *restrict) ;

int ezudp_client (
   uint16_t port, char const addr[],
   ezudp_clientcb_t cb,
   void *restrict cb_args)
__attribute__ ((nonnull (2, 3), warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _EZUDP_CLIENT_H_ */

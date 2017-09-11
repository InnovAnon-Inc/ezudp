#ifndef _EZUDP_CLIENT_H_
#define _EZUDP_CLIENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#define inline __inline__

#include <stdint.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <ezudp.h>

typedef __attribute__ ((nonnull (2), warn_unused_result))
int (*ezudp_clientcb_t) (socket_t, struct sockaddr_in *restrict, void *) ;

int ezudp_client (
   uint16_t port, const char addr[],
   ezudp_clientcb_t cb,
   void *cb_args)
__attribute__ ((nonnull (2, 3), warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _EZUDP_CLIENT_H_ */

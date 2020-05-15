#ifndef _EZUDP_SERVER_H_
#define _EZUDP_SERVER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include <network.h>

typedef __attribute__ ((nonnull (2), warn_unused_result))
int (*ezudp_servercb_t) (socket_t, struct sockaddr_in *restrict,
   void *restrict) ;

int ezudp_server (
   uint16_t port, uint32_t addr,
   ezudp_servercb_t cb, void *restrict cb_args)
__attribute__ ((nonnull (3), warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _EZUDP_SERVER_H_ */

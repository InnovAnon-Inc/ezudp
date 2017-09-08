#ifndef _EZUDP_CLIENT_H_
#define _EZUDP_CLIENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/types.h>
#include <sys/socket.h>

#include "ezudp.h"

int ezudp_client (
   short port, const char *addr,
   int (*cb) (socket_t, struct sockaddr_in *, void *), void *cb_args) ;

#ifdef __cplusplus
}
#endif

#endif /* _EZUDP_CLIENT_H_ */

#ifndef _EZUDP_CLIENT_H_
#define _EZUDP_CLIENT_H_

#include <sys/types.h>
#include <sys/socket.h>

#include "ezudp.h"

int ezudp_client (
   short port, const char *addr,
   int (*cb) (socket_t, struct sockaddr_in *, void *), void *cb_args) ;

#endif /* _EZUDP_CLIENT_H_ */

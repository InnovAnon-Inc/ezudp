#ifndef _EZUDP_SERVER_H_
#define _EZUDP_SERVER_H_

#include "ezudp.h"

int ezudp_server (
   short port, long addr,
   int (*cb) (socket_t, void *), void *cb_args) ;

#endif /* _EZUDP_SERVER_H_ */

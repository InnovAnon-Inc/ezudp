#ifndef _EZUDP_SERVER_H_
#define _EZUDP_SERVER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ezudp.h"

int ezudp_server (
   short port, long addr,
   int (*cb) (socket_t, void *), void *cb_args) ;

#ifdef __cplusplus
}
#endif

#endif /* _EZUDP_SERVER_H_ */

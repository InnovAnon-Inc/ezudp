#ifndef _EZUDP_SERVER_H_
#define _EZUDP_SERVER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "ezudp.h"

int ezudp_server (
   uint16_t port, uint32_t addr,
   int (*cb) (socket_t, void *), void *cb_args) ;

#ifdef __cplusplus
}
#endif

#endif /* _EZUDP_SERVER_H_ */

#ifndef _EZUDP_SERVER_H_
#define _EZUDP_SERVER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "ezudp.h"

typedef __attribute__ ((warn_unused_result))
int (*ezudp_servercb_t) (socket_t, void *);

int ezudp_server (
   uint16_t port, uint32_t addr,
   ezudp_servercb_t cb, void *cb_args)
__attribute__ ((nonnull (3), warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _EZUDP_SERVER_H_ */

#if HAVE_CONFIG_H
#include <config.h>
#endif

#define inline __inline__

#include <strings.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <restart.h>

#include <network-server.h>
#include <ezudp-server.h>

__attribute__ ((nonnull (3), warn_unused_result))
int ezudp_server (
   uint16_t port, uint32_t addr,
   ezudp_servercb_t cb, void *restrict cb_args) {
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wtraditional-conversion"
   return network_server (port, addr, SOCK_DGRAM, IPPROTO_UDP, cb, cb_args);
	#pragma GCC diagnostic pop
}

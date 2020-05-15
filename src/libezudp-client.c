#if HAVE_CONFIG_H
#include <config.h>
#endif

/*#define _BSD_SOURCE*/
#define _DEFAULT_SOURCE

#ifndef NDEBUG
#include <stdio.h>
#endif
#include <strings.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>

#include <restart.h>

#include <network-client.h>
#include <ezudp-client.h>

__attribute__ ((nonnull (2, 3), warn_unused_result))
int ezudp_client (
   uint16_t port, char const addr[],
   ezudp_clientcb_t cb,
   void *restrict cb_args) {
#ifndef NDEBUG
   puts ("ezudp_client()");
#endif
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wtraditional-conversion"
   return network_client (port, addr, SOCK_DGRAM, IPPROTO_UDP, cb, cb_args);
	#pragma GCC diagnostic pop
}


#ifndef _EZUDP_H_
#define _EZUDP_H_

typedef int socket_t;

int ezudp (
   short port, long addr,
   int (*cb) (socket_t, void *), void *cb_args) ;

#endif /* _EZUDP_H_ */

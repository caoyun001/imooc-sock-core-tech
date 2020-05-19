#ifndef _MCAST_H_
#define _MCAST_H_

#include <sys/socket.h>

int mcast_get_addr(const char *hostname, const char *service, struct sockaddr *addr);
int mcast_join_group(int fd, struct sockaddr *mcast_addr, struct sockaddr *localaddr);
int mcast_leave_group(int fd, struct sockaddr *mcast_addr, struct sockaddr *localaddr);
int mcast_set_ttl(int fd, int family, int ttl);
int mcast_set_loop(int fd, int family, int flag);

#endif//_MCAST_H_


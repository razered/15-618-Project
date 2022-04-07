/* Imported from 18-613: Foundations of Computer Systems (Lab-7 Proxy Lab) */

#ifndef SOCKET_H
#define SOCKET_H

#define LISTENQ 1024 /* Second argument to listen() */

/* Reentrant protocol-independent client/server helpers */
int open_clientfd(const char *hostname, const char *port);
int open_listenfd(const char *port);

#endif /* CSAPP_H */
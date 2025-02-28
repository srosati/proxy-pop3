#ifndef NETUTILS_H_CTCyWGhkVt1pazNytqIRptmAi5U
#define NETUTILS_H_CTCyWGhkVt1pazNytqIRptmAi5U

#include <netinet/in.h>

#include <buffer.h>

#define SOCKADDR_TO_HUMAN_MIN (INET6_ADDRSTRLEN + 5 + 1)
/**
+ * Describe de forma humana un sockaddr:
+ *
+ * @param buff     el buffer de escritura
+ * @param buffsize el tamaÃ±o del buffer  de escritura
+ *
+ * @param af    address family
+ * @param addr  la direcciÃ³n en si
+ * @param nport puerto en network byte order
+ *
+ */
const char * sockaddr_to_human(char *buff, const size_t buffsize, const struct sockaddr *addr);

int is_ipv6(const char* host);

int is_ipv4(const char* host);

#endif

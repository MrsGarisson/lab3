#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <resolv.h>

int main()
{
  int sock, connection;
  struct sockaddr_in addr;

  if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
    perror("socket");
    }

  bzero(&addr, sizeof(addr));

  addr.sin_family = AF_INET;
  addr.sin_port = htons(17000);
  addr.sin_addr.s_addr = INADDR_ANY;

  if (bind(sock, (struct sockaddr *) &addr, sizeof(addr)) !=0) {
    perror("bind");
    return 1;
    }

  if (listen(sock, 20) != 0) {
    perror("listen");
    return 2;
    }

 close(sock);

 return 0;
}

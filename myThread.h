#ifndef ___MyThread___
#define ___MyThread___

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <stdlib.h>
#include <arpa/inet.h>

void * myThread(void* a);

#endif

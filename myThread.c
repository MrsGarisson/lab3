#include "myThread.h"

struct _message
{
	char * file;
	int size;
	int index;
};

void * myThread(void* a)
{
	struct _message *mes;
	mes = (struct message *)a;
  	printf("%d\n %s\n %d\n", mes->index, mes->file, mes->size);
	write(mes->index, mes->file, mes->size);
	return;
}

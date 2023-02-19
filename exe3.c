#include <stdio.h>
#include <stdlib.h>

void main()
{
	struct NODE {
		int key;
		struct NODE* next;
	};

	struct NODE* node;

	node = (struct NODE*)malloc(sizeof(struct NODE*));

	if (node != (struct NODE*)NULL) // defensive coding
	{
		(*node).key = 100;
		(*node).next = NULL;
		free(node);
	}
	
}
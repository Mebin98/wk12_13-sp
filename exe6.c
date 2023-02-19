#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{

	struct NODE {
		int key;
		struct NODE* next;
	};
	struct NODE* ptr, * node0, * node1, * node2, * node3, *prevptr = NULL;

	node0 = (struct NODE*)malloc(sizeof(struct NODE));
	node1 = (struct NODE*)malloc(sizeof(struct NODE));
	node2 = (struct NODE*)malloc(sizeof(struct NODE));
	node3 = (struct NODE*)malloc(sizeof(struct NODE));

	node0->key = 100;
	node1->key = 250;
	node2->key = 467;
	node3->key = 300;

	node0->next = node1;
	node1->next = node2;
	node2->next = NULL;

	ptr = node0;

	while (ptr != NULL)
	{
		if ((*ptr).key < 300)
		{
			prevptr = ptr;
			ptr = (*ptr).next;
		}
		else if ((*ptr).key > 300)
		{
			(*prevptr).next = &(*node3).key;
			(*node3).next = &(*ptr).key;
			printf("key inserted\n");
			break;
		}
	}
	printf("node0.key : %d\n", node0->key);
	printf("node0.next : %d\n", node0->next);
	printf("node1.key : %d\n",node1->key);
	printf("node1.next : %d\n",node1->next);
	printf("node2.key : %d\n",node2->key);
	printf("node2.next : %d\n",node2->next);
	printf("node3.key : %d\n",node3->key);
	printf("node3.next : %d\n",node3->next); 
	

	printf("node1.key 林家 : %d\n", &(*node1).key);
	printf("node2.key 林家 : %d\n", &(*node2).key);
	printf("node3.key 林家 : %d\n", &(*node3).key);

	return 0;
}
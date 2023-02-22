#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

/* Write a C program for inserting a new node
(before the current first node), using aa function. */


int main()
{
	struct NODE {
		int key;
		struct NODE* next;
	};
	struct NODE* ptr, * old_ptr = NULL, * node0, * node1, * node2,  *first, *nxt_ptr = NULL;

	node0 = (struct NODE*)malloc(sizeof(struct NODE));
	node1 = (struct NODE*)malloc(sizeof(struct NODE));
	node2 = (struct NODE*)malloc(sizeof(struct NODE));

	node0->key = 100;
	node1->key = 250;
	node2->key = 467;

	node0->next = node1;
	node1->next = node2;
	node2->next = NULL;

	ptr = node0;

	int delkey = 250;

	while (ptr != NULL)
	{
		if (((*ptr).key) < delkey)
		{
			old_ptr = ptr;
			ptr = (*ptr).next;
			nxt_ptr = (*ptr).next;
		}
		else
		{
			ptr->next = NULL;
			old_ptr->next = &(*nxt_ptr).key;
			printf("key deleted\n");
			break;
		}
	}
	printf("node0.key : %d\n",node0->key);
	printf("node1.key : %d\n",node1->key);
	printf("node2.key : %d\n\n",node2->key);

	printf("node0.next : %d\n", node0->next);
	printf("node1.next : %d\n", node1->next);
	printf("node2.next : %d\n\n", node2->next);

	printf("node0.address : %d\n", &(*node0).key);
	printf("node1.address : %d\n", &(*node1).key);
	printf("node2.address : %d\n", &(*node2).key);



	return 0;
}
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
	struct NODE* ptr, * old_ptr = NULL, * node0, * node1, * node2, * first;

	node0 = (struct NODE*)malloc(sizeof(struct NODE));
	node1 = (struct NODE*)malloc(sizeof(struct NODE));
	node2 = (struct NODE*)malloc(sizeof(struct NODE));

	node0->key = 100;
	node1->key = 250;
	node2->key = 467;

	node0->next = node1;
	node1->next = node2;
	node2->next = NULL;

	first = node0;

	struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
	new_node->key = 300;
	new_node->next = NULL;

	ptr = first;
	while (ptr != NULL)
	{
		if ((*ptr).key < new_node->key)
		{
			old_ptr = ptr; // "구" ptr에 보관
			ptr = (*ptr).next;
		}
		else
		{
			if (ptr == first)
			{
				first = new_node;
				new_node->next = ptr;
			}
			else
			{
				(*old_ptr).next = new_node;
				new_node->next = ptr;
				printf("key inserted");
				break;
			}
		}
	}


	return 0;
}
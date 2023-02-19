#include <stdio.h>
#include <stdlib.h>

void main()
{
	struct NODE {
		int key;
		struct NODE* next;
	};
	struct NODE* node0, * node1, * node2;

	node0 = (struct NODE*)malloc(sizeof(struct NODE*));
	node1 = (struct NODE*)malloc(sizeof(struct NODE*));
	node2 = (struct NODE*)malloc(sizeof(struct NODE*));

	(*node0).next = node1; // node0->next = node1;
	(*node1).next = node2; // node1->next = node2;
	(*node2).next = NULL;  // node2->next = NULL; 

	free(node0);
	free(node1);
	free(node2);
}
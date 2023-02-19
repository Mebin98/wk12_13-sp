#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int val;
	scanf("%d", &val);
	int found = 0;
	int i;
	int search = 0;

	struct NODE {
		int key;
		struct NODE* next;
	};
	struct NODE* ptr, *node0, *node1, *node2;
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

	while (ptr != NULL)
	{
		if ((*ptr).key == val)
		{
			found = 1;
			break;
		}
		ptr = (*ptr).next;
	}

	if (found == 1)
	{
		printf("Search Success\n");
	}
	else if (found == 0)
	{
		printf("Search Failed\n");
	}

	return 0;
}
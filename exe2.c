#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* nums;
	nums = (int*)malloc(10 * sizeof(int));
	if (nums == (int*)NULL) // defensive coding
	{
		printf("malloc failed");
		exit(1);
	}

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", nums[i]);
	}

	free(nums);
}
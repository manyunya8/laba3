#include <stdio.h>
#define SIZE 10

int* delLocal(int *a)
{
	int static arr2[SIZE] = { 0 };
	int* c = arr2;
	for(int i = 0; i < SIZE; i++, a++)
	{
		if (!(*a < *(a - 1) && *a < *(a + 1) && i != SIZE - 1 && i != 0
			|| i == 0 && *a < *(a + 1)
			|| i == SIZE - 1  && *a < *(a - 1)))
		{
			*c = *a;
			c++;
		}
	}
	c = arr2;
	return c;
}

int inArr(int* a)
{
	printf("Enter ten numbers: \n");
	for (int i = 0; i < SIZE; i++, a++)
	{
		if (scanf("%d", a) != 1)
			return 1;
	}
	return 0;
}

void outArr(int* a)
{
	printf("Result: \n");
	for (int i = 0; i < SIZE; i++, a++)
		printf("%d ", *a);
	printf("\n");
}
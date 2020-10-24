#include <stdio.h>

int* delLocal(int *a)
{
	int static arr2[10] = { 0 };
	int* c = arr2;
	for(int i = 0; i < 10; i++, a++)
	{
		if (!(*a < *(a - 1) && *a < *(a + 1) && i != 9 && i != 0
			|| i == 0 && *a < *(a + 1)
			|| i == 9 && *a < *(a - 1)))
		{
			*c = *a;
			c++;
		}
	}
	static int* b;
	b = arr2;
	return b;
}

int inArr(int* a)
{
	printf("Enter ten numbers: \n");
	for (int i = 0; i < 10; i++, a++)
	{
		if (scanf("%d", a) != 1)
			return 1;
	}
	return 0;
}

void outArr(int* a)
{
	printf("Result: \n");
	for (int i = 0; i < 10; i++, a++)
		printf("%d ", *a);
}
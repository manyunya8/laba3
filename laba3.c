#include <stdio.h>

int* delLocal(int *a, int size, int *b )
{
	int count = 0;
	for(int i = 0; i < size; i++, a++)
	{
		if (!(*a < *(a - 1) && *a < *(a + 1) && i != size - 1 && i != 0
			|| i == 0 && *a < *(a + 1)
			|| i == size - 1  && *a < *(a - 1)))
		{
			*b = *a;
			b++;
			count++;
		}
	}
	for (size; size > count; size--, b++)
		*b = 0;
	return count;
}

int inArr(int* a, int size)
{
	printf("Enter %d numbers: \n", size);
	for (int i = 0; i < size; i++, a++)
	{
		if (scanf("%d", a) != 1)
			return 1;
	}
	return 0;
}

void outArr(int* b, int size)
{
	printf("Result: \n");
	for (int i = 0; i < size; i++, b++)
		printf("%d ", *b);
	printf("\n");
}
#include <stdio.h>

int delLocal(int *a, int size1, int *b, int size2 )
{
	if (size1 != size2)
		return -1;
	int size = size1;
	int count = 0;
	if (size == 0)
		return 0;
	*b = *a;
	b++;
	a++;
	count++;
	for(int i = 1; i < size - 1; i++, a++)
	{
		if (!(*a < *(a - 1) && *a < *(a + 1)))
		{
			*b = *a;
			b++;
			count++;
		}
	}
	if (size != 1) 
	{
		*b = *a;
		b++;
		count++;
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

int outArr(int* b, int size)
{
	int i = 0;
	printf("Result: \n");
	for (i; i < size; i++, b++)
		printf("%d ", *b);
	printf("\n");
	return i;
}
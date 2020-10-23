#include <stdio.h>
#include "laba3.h"

int main()
{
	int mas[10];
	int* a = mas;
	printf("Enter ten numbers: \n");
	for (int i = 0; i < 10; i++)
	{
		if (scanf("%d", &mas[i]) != 1)
			return printf("Not a number");
	}
	int* m;
	m = delLocal(a);
	printf("Result: \n");
	OutMas(m);
	return 0;
}
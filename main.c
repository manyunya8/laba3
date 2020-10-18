#include <stdio.h>
#include "laba3.h"

int main()
{
	int mas[10];
	printf("Enter ten numbers: \n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &mas[i]);
	}
	delLocal(mas);
	printf("Result: \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", mas[i]);
	}
	return 0;
}
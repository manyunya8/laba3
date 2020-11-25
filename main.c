#include "laba3.h"
#define SIZE 10

int main()
{
	int local[SIZE] , nolocal[SIZE];
	int* l = local;
	int* n = nolocal;
	if (inArr(l, SIZE) == 1)
		return printf("Not a number!\n");
	delLocal(l, SIZE, n);
	outArr(n, SIZE);
	return 0;
}
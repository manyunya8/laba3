#include "laba3.h"
#define SIZE 10

int main()
{
	int local[SIZE] , nolocal[SIZE];
	int* a = local;
	int* n = nolocal;
	if (inArr(a, SIZE) == 1)
		return printf("Not a number!\n");
	
	if(delLocal(a, SIZE, n, SIZE) == -1)
		return printf("Wrong size!");
	outArr(n, SIZE);
	return 0;
}
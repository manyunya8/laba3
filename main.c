#include "laba3.h"
#define SIZE 10

int main()
{
	int local[SIZE] , nolocal[SIZE];
	if (inArr(local, SIZE) == 1)
		return printf("Not a number!\n");
	
	if(delLocal(local, SIZE, nolocal, SIZE) == -1)
		return printf("Wrong size!");
	outArr(nolocal, SIZE);
	return 0;
}
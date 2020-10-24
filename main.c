#include "laba3.h"

int main()
{
	int arr[10];
	int* a = arr;
	printf("Enter ten numbers: \n");
	if (inArr(a) == 1)
		return printf("Not a number!");
	int* m;
	m = delLocal(a);
	printf("Result: \n");
	outArr(m);
	return 0;
}
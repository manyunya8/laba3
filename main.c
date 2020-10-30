#include "laba3.h"

int main()
{
	int arr[10];
	int* a = arr;
	int* m;
	if (inArr(a) == 1)
		return printf("Not a number!\n");
	m = delLocal(a);
	outArr(m);
	return 0;
}
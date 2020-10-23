int* delLocal(int *a)
{
	int static mas2[10000] = { 0 };
	int* c = mas2;
	for(int i = 0; i < 10; i++ )
	{
		if (!(*a < *(a - 1) && *a < *(a + 1) && i != 9 && i != 0
			|| i == 0 && *a < *(a + 1)
			|| i == 9 && *a < *(a - 1)))
		{
			*c = *a;
			c++;
		}
		a++;
	}
	static int* b;
	b = mas2;
	return b;
}

void OutMas(int* a)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *a);
		a++;
	}
}
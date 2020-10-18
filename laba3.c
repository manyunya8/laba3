void delLocal(int mas[10])
{
	int i = 0, n = 0;
	int mas2[10] = { 0 };
	while (i < 10)
	{
		if (!(mas[i] < mas[i - 1] && mas[i] < mas[i + 1] && i != 9 && i != 0
			|| i == 0 && mas[i] < mas[i + 1]
			|| i == 9 && mas[i] < mas[i - 1]))
		{
			mas2[n] = mas[i];
			n++;
		}
		i++;
	}
	for (int j = 0; j < 10; j++)
		mas[j] = mas2[j];
}
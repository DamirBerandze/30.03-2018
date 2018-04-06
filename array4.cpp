#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int array[100];
	
	for(int i = 0; i < 100 ; i++)	*(array + i) = rand() % 20000 - 10000; //заполнение массива
	
	for(int i = 0; i < 10; i++)      //вывод массива
	{
		for(int j = 0; j < 10 ; j++)	 printf("%7d", *(array + 10*i + j));
		printf("\n");
	}
	
	int sum = 0;

	for(int i = 0; i < 100 ; i++)
	{
		if(*(array + i) > 0)	sum += *(array + i);
	}
	
	printf("----------------------------------------------\nСумма положительных элементов массива: %d\n", sum);
	
	system("pause");
	
	return 0;
}

#include <stdio.h>
#include <Windows.h>

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int array[100];
	
	*array = 1;
	
	for(int i = 1; i < 100 ; i++)	*(array + i) = *(array + i - 1) + 1; //заполнение массива
	
	for(int i = 0; i < 10; i++)      //вывод массива
	{
		for(int j = 0; j < 10 ; j++)	 printf("%5d", *(array + 10*i + j));
		printf("\n");
	}
	
	int max = 0;

	for(int i = 0; i < 100 ; i++)
	{
		if(*(array + i) > max)	max = *(array + i);
	}
	
	printf("----------------------------------------------\nНаибольший положительноый элемент с чётным индексом: %d\n", max);
	
	system("pause");
	
	return 0;
}

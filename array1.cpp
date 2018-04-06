#include <stdio.h>
#include <Windows.h>

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int array[100];
	
	*(array) = 1;
	
	for(int i = 1; i < 100 ; i++)	*(array + i) = 	*(array + i - 1) + 1; //заполнение массива
	
	for(int i = 0; i < 10; i++)      //вывод массива
	{
		for(int j = 0; j < 10 ; j++)	 printf("%5d", *(array + 10*i + j));
		printf("\n");
	}
	
	int button1, button2;
	
	printf("------------------------------------\n ¬ведите номера столбцов, которые вы хотите помен€ть: ");
	scanf("%d", &button1);
	scanf("%d", &button2);
	
	for(int i = 0; i < 10; i++)  //перестановка
	{
		int q = *(array + button1 + 10*i - 1);
		*(array + button1 + 10*i - 1) = *(array + button2 + 10*i - 1); 
		*(array + button2 + 10*i - 1) = q;
	}
	
	for(int i = 0; i < 10; i++)      //вывод изменЄнного массива
	{
		for(int j = 0; j < 10 ; j++)	 printf("%5d", *(array + 10*i + j));
		printf("\n");
	}
	
	system("pause");
	
	return 0;
}

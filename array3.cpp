#include <stdio.h>
#include <Windows.h>

#define SIZE 100 

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int array[SIZE];
	
	*(array) = 1;
	
	for(int i = 1; i < 100 ; i++)	*(array + i) = 	*(array + i - 1) + 1; //���������� �������
	
	for(int i = 0; i < 10; i++)      //����� �������
	{
		for(int j = 0; j < 10 ; j++)	 printf("%5d", *(array + 10*i + j));
		printf("\n");
	}
	
	int max = *(array + SIZE - 1);
	
	for(int i = 0; i < 100 ;i++)  //����� ����������� �������� �������
	{
		if(max > *(array + i))	max = *(array + i);
	}
	
	printf("----------------------------------------------\n���������� ������� �������: %d\n", max);
	
	system("pause");
	
	return 0;
}

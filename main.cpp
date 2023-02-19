#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	int mas[100][100];
	int strok;
	int stlbc;
	printf("Сколько хотим строк?\nХочу==>");
	scanf("%d",&strok);
	printf("А столбцов?\nХочу==>");
	scanf("%d",&stlbc);
	srand(time(NULL));
	for(int i=0;i<=strok;i++)
	{
		for(int j=0;j<=stlbc;j++)
		{
			mas[i][j]=rand()%10;
		}
	}
	for(int i=0;i<=strok;i++)
	{
		for(int j=0;j<=stlbc;j++)
		{
			for(int k=0;k<j;k++){
				if(mas[i][k] > mas[i][j])
				{
					int temp=mas[i][j];
					mas[i][j]=mas[i][k];
					mas[i][k]=temp;
				}
			}
		}
	}
	for(int i=0;i<=strok;i++)
	{
		for(int j=0;j<=stlbc;j++){
			for(int k=0;k<=stlbc;k++){
				if(j == 0 && k == stlbc)
				{
					int temp=mas[i][k];
					mas[i][k]=mas[i][j];
					mas[i][j]=temp;
				}
			}
		}
	}
	printf("_______________________________________________________\n");
	printf("Сортировка по строкам с заменой столбцов>\n");
	for(int i=0;i<=strok;i++)
	{
		for(int j=0;j<=stlbc;j++)
		{
			printf("%2d ",mas[i][j]);
		}
		printf("\n");
	}
	printf("_______________________________________________________\n");
	printf("А теперь, Дамы и Господа. Представляю вашему вниманию...\n");
	printf("_______________________________________________________\n");
	printf("Сортировка по столбцам и строкам одновременно|\n");
	for(int i=0;i<=strok;i++)
	{
		for(int j=0;j<=stlbc;j++)
		{
			for(int m=0;m<=strok;m++)
			{
				for(int n=0;n<=stlbc;n++)
				{
					if(mas[i][j]<mas[m][n])
					{
						int temp=mas[i][j];
						mas[i][j]=mas[m][n];
						mas[m][n]=temp;
					}
				}
			}
		}
	}
	for(int i=0;i<=strok;i++)
	{
		for(int j=0;j<=stlbc;j++)
		{
			printf("%2d ",mas[i][j]);
		}
		printf("\n");
	}
	printf("Просьба,показывать на видео результат работы программы преподавателя.\nДля наглядного сравнения результата.\n");
	printf("Спасибо за внимание:)");
	printf("\nХорошего дня!");
	
	
	return 0;
}

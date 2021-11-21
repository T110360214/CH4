#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void change(int* x, int* y);
void bubble(const int array[], int size);

int main()
{
	int a[SIZE] = {500,86,465,23,14,56,87,465,88,1};
	printf("Before bubble sort array is: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}

	bubble(a,SIZE);

	printf("\n\nAfter bubble sort array is: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n ");

	system("pause");
	return 0;
}

void change(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void bubble(const int array[], int size)
{
	for (int i = 0; i <size ; i++)
	{
		for (int j = 0; j < (size-1)-i; j++)
		{
			if (array[j] > array[j + 1])
			change(&array[j] , &array[j + 1]);
		}
		
	}
}
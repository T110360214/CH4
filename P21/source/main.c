#include<stdio.h>
#include<stdlib.h>

void staticArrayInit();
void automaticArray();

int main()
{
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArray();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArray();
	printf("\n");
	system("pause");
	return 0;
}

void staticArrayInit()
{
	static int array1[3];
	printf("\nValues on entering staticArrayInit:\n");

	for (int i = 0; i < 3; i++)
		printf(" Array1[%d] = %d ", i, array1[i]);

	printf("\nValues on exiting staticArrayInit:\n");

	for (int i = 0; i < 3; i++)
		printf(" Array1[%d] = %d ", i, array1[i]+=5);
}

void automaticArray() 
{
	int array2[3] = {1,2,3};
	printf("\n\nValues on entering automicArrayInit:\n");

	for (int i = 0; i < 3; i++)
		printf(" Array2[%d] = %d ", i, array2[i]);

	printf("\nValues on exiting automicArrayInit:\n");

	for (int i = 0; i < 3; i++)
		printf(" Array2[%d] = %d ", i, array2[i] += 5);
}

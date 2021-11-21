#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int linearSearch(const int array[],int key ,int size);

int main()
{
	int a[SIZE], x, searchkey, element;
	for (x = 0; x < SIZE; x++)
		a[x] = 2 * x;
	printf("Enter integer seach key:\n");
	scanf_s("%d",&searchkey);
	element = linearSearch(a,searchkey,SIZE);

	if (element != -1)
		printf("Found value in element %d\n", element);
	else
		printf("Vaule not found\n");

	system("pause");
	return 0;
}

int linearSearch(const int array[], int key, int size) 
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == key)
			return i;
	}
	return -1;
}
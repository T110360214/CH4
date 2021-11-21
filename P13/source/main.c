#include<stdio.h>
#include<stdlib.h>

void printArrary(const int a[][13]);

int main()
{
	int array1[2][3] = { {1,2,3},{4,5,6} };
	int array2[2][3] = { 1,2,3,4,5 };
	int array3[2][3] = { {1,2},{4} };

	printf("Valuse in array1 by row are:\n");
	printArrary(array1);
	
	printf("Valuse in array2 by row are:\n");
	printArrary(array2);

	printf("Valuse in array3 by row are:\n");
	printArrary(array3);
	
	system("pause");
	return 0;
}

void printArrary(const int a[][3])
{
	for (int i = 0; i <=1; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

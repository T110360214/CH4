#include<stdio.h>
#include<stdlib.h>
#define STUDENT 3
#define EXAMS 4

int mini(const int gra[][EXAMS], int pup, int tests);
int maxi(const int gra[][EXAMS], int pup, int tests);
double average(const int SOG[], int tests);
void printarray(const int gra[][EXAMS], int pup, int tests);

int main()
{
	int student;
	const int SG[STUDENT][EXAMS] =
	{ {77,68,86,73},
		{96,87,89,78},
		{70,90,86,81} };

	printf("The array is:\n");
	printarray(SG, STUDENT, EXAMS);

	printf("\n\nLowest grade:%d\nHighest grade: %d\n",
		mini(SG,STUDENT,EXAMS),
		maxi(SG, STUDENT, EXAMS));
	for (student = 0; student < STUDENT; student++)
		printf("The average grade for student %d is %.2f\n", student, average(SG[student], EXAMS));
	system("pause");
	return 0;
}



void printarray(const int gra[][EXAMS], int pup, int tests)
{
	printf("		[0]  [1]  [2]  [3]");
	for (int i = 0; i <pup; i++)
	{
		printf("\nstudentGrades[%d]", i);
		for (int j = 0; j < tests; j++)
			printf("%-5d",gra[i][j]);
	}
}

int mini(const int gra[][EXAMS], int pup, int tests)
{
	int lowgrade = 100;
	for (int i = 0; i < pup; i++)
	{
		for (int j = 0; j < tests; j++)
			if (gra[i][j] < lowgrade)
				lowgrade = gra[i][j];
	}
	return lowgrade;
}


int maxi(const int gra[][EXAMS], int pup, int tests)
{
	int highgrade =0;
	for (int i = 0; i < pup; i++)
	{
		for (int j = 0; j < tests; j++)
			if (gra[i][j] > highgrade)
				highgrade = gra[i][j];
	}
	return highgrade;
}

double average(const int SOG[], int tests)
{
	int total = 0;
	for (int i = 0; i < tests; i++)
		total += SOG[i];
	return (double)total / tests;
}
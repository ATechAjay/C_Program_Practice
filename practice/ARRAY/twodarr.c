#include <stdio.h>
int main(void)
{
	int array[100][100], k, l, R, C;
	printf("Enter the elements of the matrix :  \n");
	printf("Enter the value of ROWS ??");
	scanf("%d", &R);
	printf("Enter the value of COLUMNS ??");
	scanf("%d", &C);
	for (k = 0; k < R; k++)//ROWS
	{
		for (l = 0; l < C; l++)//COLUMNS
		{
			scanf("%d", &array[k][l]);//INPUT MATRIX VALUE
		}
	}
	printf("This is your matrix :) \n");
	for (k = 0; k < R; k++)//ROWS
	{
		for (l = 0; l < C; l++)//COLUMNS
		{
			printf("%d\t", array[k][l]);//PRINT MATRIX
		}
		printf("\n");
	}
	printf("\n");
}
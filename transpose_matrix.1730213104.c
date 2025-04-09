// write a c program to read order of the matrix, elements of the matrix and display its transpose.
#include<stdio.h>
int main()
{
	int rows, cols;
	printf("ENTER THE TOTAL NUMBER OF ROW : ");
	scanf("%d",&rows);
	printf("ENTER THE TOTAL NUMBER OF COLUMNS : ");
	scanf("%d",&cols);
	int matrix[rows] [cols], transpose[cols] [rows];
	printf("ENTER THE ELEMENTS OF YOUR MATRIX : \n");
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			printf("ELEMENTS [%d] [%d] : ",i+1,j+1);
			scanf("%d",&matrix[i] [j]);
		}
	}
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			transpose[j] [i] = matrix[i][j];
		}
	}
	printf("THE TRANSPOSE OF THE GIVEN MATRIX IS : \n");
	for(int i=0; i<cols; i++)
	{
		for(int j=0; j<rows; j++)
		{
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
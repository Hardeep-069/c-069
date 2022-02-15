#include<stdio.h>

main()
{
	int matrix[4][4],row,column;
	
	printf("enter the number of rows : ");
	scanf("%d",&row);
	
	printf("enter the number of columns : ");
	scanf("%d",&column);
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		scanf("%d",&matrix[i][j]);
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		printf("%d",matrix[i][j]);
		
		printf("\n");
	}
			
			
	for(int i=0;i<column;i++)
	{
		for(int j=0;j<row;j++)
		printf("%d",matrix[j][i]);
		
		printf("\n");
	}
}
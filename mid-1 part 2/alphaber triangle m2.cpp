#include<stdio.h>

main()

{
	int n;
	
	printf("enter the number of rows : ");
	scanf("%d",&n);
	
	for (char i=65;i<=65+(n-1);i++)
	{
		for(char j=65;j<=i;j++)
	    {
	        printf("%c",i);
        }
        printf("\n");
	}
}

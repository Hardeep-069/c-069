#include<stdio.h>

main()

{
	int n; 
    char s;
	
	printf("n = ");
	scanf("%d",&n);
	
	printf("symbol = ");
	scanf(" %c",&s);
	
	for (int b=1;b<=n;b++)
	{
		for(int c=1;c<=b;c++)
	    {
	        printf("%c",s);
        }
        printf("\n");
	}
}

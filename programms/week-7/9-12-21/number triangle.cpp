#include<stdio.h>

main()

{
	int n; 
	
	printf("n = ");
	scanf("%d",&n);
	
	for (int b=1;b<=n;b++)
	{
		for(int c=1;c<=b;c++)
	    {
	        printf("%d",c);
        }
        printf("\n");
	}
}

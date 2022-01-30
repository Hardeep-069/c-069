#include<stdio.h>

main()

{
	int n,b,c=0;
	
	printf("n = ");
	scanf("%d",&n);
	
	for (b=1;b<=n*2;b++)
	{
		if(b%2!=0)
		c=c+b;
	}
	printf("%d",c);
}
#include<stdio.h>

main()

{
	int a,b;
	
	printf("enter a value for a : ");
	scanf("%d",&a);
	
	b=a&1;
	
	printf("the lsb of the binary digit is %d ",b);
}

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter the number : ");
	scanf("%d",&a);
	
	printf("enter the nth number : ");
	scanf("%d",&b);
	
	c=(a>>b)&1;
	
	if (c==1)
	printf("\nthe nth bit of number is SET(1)");
	
	else
	printf("\nthe nth bit of number is SET(0)");	
}

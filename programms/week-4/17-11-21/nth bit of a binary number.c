#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter the number : ");
	scanf("%d",&a);
	
	printf("enter the nth number : ");
	scanf("%d",&b);
	
	c=(a>>b)&1;
	printf("THE %dth of %d is %d",b,a,c);	
}

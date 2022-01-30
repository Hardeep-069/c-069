#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter the number : ");
	scanf("%d",&a);
	
	b=a&1;
	c=(a>>b)&1;
	
	if (a<20)
    {
	      
   	printf("enter the nth number : ");
	scanf("%d",&b);
	
	printf("THE %dth of %d is %d",b,a,c);	
    }   
	
    else
	printf("the lsb of the binary digit is %d ",b);
}

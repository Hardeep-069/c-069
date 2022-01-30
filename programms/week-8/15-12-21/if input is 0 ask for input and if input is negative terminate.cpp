#include<stdio.h>

main()
{

int b;
{  	for (int a=1;a<=10;a++)
	{
	 printf("enter a number : ");
	 scanf("%d",&b);
	 
	 if (b==0)
	 continue;

     if (b<0)
     break;
	}
}
}

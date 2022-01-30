#include<stdio.h>

main()

{
	float a,b,c;
	
	printf("a = ");
	scanf("%f",&a);
	
    printf("b = ");
	scanf("%f",&b);
	
	printf("c = ");
	scanf("%f",&c);
	
	if (a>b && a>c)
	{
	    printf("the greatest number is %f\n",a);
	     
	    if(b>c)
	    printf("the second greatest number is %f\n",b);
	    
	    else
	    {
          printf("the second greatest number is %f\n",c);
          printf("the third greatest number is %f\n",b);
        }
    }  
	
	else if (b>a && b>c)
	{
        printf("the greatest number is %f\n",b);
        
        if(a>c)
	    printf("the second greatest number is %f\n",a);
	    
	    else
	    {
          printf("the second greatest number is %f\n",c);
          printf("the third greatest number is %f\n",a);
        }
    }
	else
	{
	    printf("the greatest number is %f\n",c);
	    
	    if(a>b)
	    printf("the second greatest number is %f\n",a);
	    
	    else
	    {
          printf("the second greatest number is %f\n",b);
          printf("the third greatest number is %f\n",a);
        }
    }	
}

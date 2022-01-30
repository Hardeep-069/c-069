#include<stdio.h>

main()

{  	int c=0;
    
	for (int a=-10;a<=10;a++)
	{
	 if (a<=0)
	 break;
	 {
	 	c+=a;  
     }
	}
	printf("sum of all the postive numbers is %d",c); 
}


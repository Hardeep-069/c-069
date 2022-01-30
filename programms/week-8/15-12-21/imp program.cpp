#include<stdio.h>

main()

{
  int n1,n2;
  
  printf("enter the rage : ");
  scanf("%d %d",&n1,&n2);
  
  for (int a=n1;a<=n2;a++)
  {

  	switch (a)
  	{
  		case 1 : printf("ONE\n");
  		        break;
  		case 2 : printf("TWO\n");
  		        break;
		case 3 : printf("THREE\n");
  		        break;  
		case 4 : printf("FOUR\n");
  		        break;  
		case 5 : printf("FIVE\n");
  		        break;  
		case 6 : printf("SIX\n");
  		        break;
		case 7 : printf("SEVEN\n");
  		        break;		  
		case 8 : printf("EIGHT\n");
  		        break;		  
		case 9 : printf("NINE\n");
  		        break;		  		  			            
	}

	if(a>9)
	{
		if(a%2==0)
		printf("EVEN\n");
		
		else
		printf("ODD\n");
	}
	
  }
  

}
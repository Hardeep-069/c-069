 #include<stdio.h>
  
  main()
  
  {
  	int a,b;
  	
  	printf("enter a number : ");
  	scanf("%d",&a);
  	
  	b=a%2;
  	
  	switch(b)
  	
  	{
  		case 0 : printf("EVEN");
  		         break;
  		case 1 : printf("ODD");
  		         break;
  	
	  }
  }
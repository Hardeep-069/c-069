 #include<stdio.h>
 #include<math.h>
  
  main()
  
  {
  	int a,b,e;
  	char c;
  	
  	printf("enter an operator : ");
  	scanf("%c",&c);
	printf("enter a number : ");
  	scanf("%d",&a);
  	printf("enter a number : ");
  	scanf("%d",&b);
  	
  	e=pow(a,b);
  	
  	switch(c)
  	
  	{
  		case '+' : printf("%d+%d = %d",a,b,a+b);
  		           break;
  		case '-' : printf("%d-%d = %d",a,b,a-b);
  		           break;
  		case '%' : printf("%d%%d = %d",a,b,a%b);
  		           break;
  		case '/' : printf("%d/%d = %d",a,b,a/b);
  		           break;
  		case '^' : printf("%d^%d = %d",a,b,e);
  		           break;
				            
  		default : printf("enter only numbers!");
  		          break;
	  }
  }
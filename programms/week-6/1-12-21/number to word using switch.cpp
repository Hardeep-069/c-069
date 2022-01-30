 #include<stdio.h>
  
  main()
  
  {
  	int a;
  	
  	printf("enter a number : ");
  	scanf("%d",&a);
  	
  	switch(a)
  	
  	{
  		case 1 : printf("ONE");
  		         break;
  		case 2 : printf("TWO");
  		         break;
  		case 3 : printf("THREE");
  		         break;
  		case 4 : printf("FOUR");
  		         break;
  		case 5 : printf("FIVE");
  		         break;
  		case 6 : printf("SIX");
  		         break;
        case 7 : printf("SEVEN");
  		         break;
  		case 8 : printf("EIGHT");
  		         break;
  		case 9 : printf("NINE");
  		         break;
  		         
  		default : printf("enter only numbers!");
  		          break;
	  }
  }

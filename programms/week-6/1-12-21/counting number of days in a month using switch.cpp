 #include<stdio.h>
  
  main()
  
  {
  	int a,b;
  	
  	printf("enter a number : ");
  	scanf("%d",&a);
  	printf("enter the year : ");
  	scanf("%d",&b);
  	
  	switch(a)
  	
  	{
  		case 1 : printf("JANUARY = 31 days");
  		         break;
  		case 2 :{
		         if (b%4==0)
  			     printf("FEBRUARY = 29 days");
  			     else
  			     printf("FEBRUARY = 28 days");
  			     break;
			    } 
  		case 3 : printf("MARCH = 31 days");
  		         break;
  		case 4 : printf("APRIL = 30 days");
  		         break;
  		case 5 : printf("MAY = 31 days");
  		         break;
  		case 6 : printf("JUNE = 30 days");
  		         break;
        case 7 : printf("JULY = 31 days");
  		         break;
  		case 8 : printf("AUGUST = 31 days");
  		         break;
  		case 9 : printf("SEPTEMBER = 30 days");
  		         break;
  		case 10 : printf("OCTOBER = 31 days");
  		         break; 
		case 11 : printf("NOVEMBER = 3 days");
  		         break;		   
		case 12 : printf("DECEMBER = 31 days");
  		         break;		           
  		         
  		default : printf("enter only numbers!");
  		          break;
	  }
  }
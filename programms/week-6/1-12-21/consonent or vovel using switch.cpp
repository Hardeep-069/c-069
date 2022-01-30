 #include<stdio.h>
  
  main()
  
  {
  	char a;
  	
  	printf("enter an alphabet : ");
  	scanf("%c",&a);
  	
  	if (a>=97 || a>=65)
  	{
	  switch(a)
  	
  	{
  		case 'a'  : printf("VOVEL");
  		           break;
  		case 'A'  : printf("VOVEL");
  		           break;
  		case 'e'  : printf("VOVEL");
  		           break;
  		case 'E' : printf("VOVEL");
  		           break;
  		case 'o' : printf("VOVEL");
  		           break;
  		case 'O'  : printf("VOVEL");
  		           break;
        case 'i' : printf("VOVEL");
  		           break;
  		case 'I'  : printf("VOVEL");
  		           break;
  		case 'u' : printf("VOVEL");
  		           break;
  		case 'U'  : printf("VOVEL");
  		           break;
  		         
  		default : printf("CONSONANT");
  		          break;
	  }
    }
    else
    printf("please enter an alphabet!");
  }

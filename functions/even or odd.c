#include<stdio.h>

   int even_odd (int x)
   {
     if(x>1)
     {
       if(x%2==0)
       return 3;
      
       else
       return 4;
     }
       else
     {
       if(x==0)
       return 1;
       
       else
       return 0;
     }
     
     
    }
    
    main()
   {
     int n;
     printf("enter the number : ");
     scanf("%d",&n);
   
     if(even_odd(n)==3)
     printf("even");  
   
     else if(even_odd(n)==4)
     printf("odd");
   
     else
     printf("neither even nor odd");      
    }

#include<stdio.h>

main()

{
    int n;
    
    printf("n=");
    scanf("%d",&n);
    
    switch(n>0)
    {
        case 1 : printf("POSITIVE");
                 break;
                               
        case 0 : if(n==0)
                 printf("ZERO");
                  
                 else
                 printf("NEGATIVE");
                 
                 break;         
    }
}

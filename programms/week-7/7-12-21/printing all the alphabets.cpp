#include<stdio.h>

main()

{
    char a,c;
    
    printf("u or l : ");
    scanf("%c",&c);
    
    if(c=='l')
    {
    for (a=97;a<=122;a++)
      {
        printf("\n%c",a);
      } 
    }
    if(c=='u')
    {
        for (a=65;a<=90;a++)
       {
        printf("\n%c",a);
       }
    }
    else
    printf("print only u or l!!");       
}

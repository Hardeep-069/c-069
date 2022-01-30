#include<stdio.h>

main()

{
    int a,b,c;
    
    printf("enter any 3 angles : ");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>0&&b>0&&c>0)
    {
        if(a+b>c)
        {
            if(a+b+c==180)
            printf("angles form a triangle");
             
            else
            printf("angles dont form a triangle");
        }
         
        else
        printf("angles dont form a triangle");
    }
    
    else
    printf("angles dont form a triangle");   
}

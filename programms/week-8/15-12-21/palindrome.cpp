#include<stdio.h>

main()

{
    int a,temp,remainder,rev_no=0;
    
    printf("enter the number : ");
    scanf("%d",&a);
    
    temp=a;
    
    while(a!=0)
    {
        remainder=a%10;
        rev_no=rev_no*10+remainder;
        a/=10;
    }
    
    if(rev_no==temp)
    printf("PALINDROME");
    
    else
    printf("NOT A PALINDROME");
}

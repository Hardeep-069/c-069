#include <stdio.h>

main() 

{
    int n,count=0,remainder;
    
    printf("entar th number : ");
    scanf("%d",&n);
    
    while (n != 0) 
    {
        remainder=n%10;
        if(remainder==0)
        {count+=1;}
        n/=10;
    }
    printf(" no. of zeroes in the number = %d",count);
}

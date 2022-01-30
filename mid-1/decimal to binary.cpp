#include<stdio.h>

main()

{
    int n,p=1,binary=0,digits=0;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        int c;
         
        c=n%2;
        binary+=c*p;
        p*=10;
        n/=2;
        digits++;        
    }
    
    for(int i=1;i<=8-digits;i++)
    {printf("0");}

    printf("%d is the binary number",binary);
}

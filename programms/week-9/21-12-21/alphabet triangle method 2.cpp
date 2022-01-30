#include<stdio.h>

main()

{
    char c;
    
    printf("enter the alphabet to be printed in last row : ");
    scanf("%c",&c);
    
    for(char i='A';i<=c;i++)
    {
        for(int j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}

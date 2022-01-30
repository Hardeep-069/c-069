#include<stdio.h>

main()

{
    int n;
    
    printf("enter the number of rows : ");
    scanf("%d",&n);
    
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

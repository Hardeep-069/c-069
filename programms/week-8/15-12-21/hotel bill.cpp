#include<stdio.h>

main()
{
    int b,bill=0,total; 
	char c;
	
	
	do
	{	
	printf("---------------\n");
	printf("|     MENU    |\n");
	printf("| 1.Idli      |\n");
	printf("| 2.Vada      |\n");
	printf("| 3.Dosa      |\n");
	printf("| 4.Poori     |\n");
	printf("| 5.Upma      |\n");
	printf("| 6.Uttapam   |\n");
	printf("---------------\n");
	
	printf("do you want to order something? ");
	scanf("%c",&c);
	
	printf("please enter the item code : ");
	scanf("%d",&b);
	
	switch(b)
	{
		case 1 : printf("Idli.......30/-");
		         bill = bill+30;
		         break;
		case 2 : printf("Vada.......50/-");
		         bill = bill+50;
		         break;         
		case 3 : printf("Dosa.......60/-");
		         bill = bill+60;
		         break;         
		case 4 : printf("Poori......80/-");
		         bill = bill+80;
		         break;
		case 5 : printf("Upma.......30/-");
		         bill = bill+30;
		         break;		 
		case 6 : printf("Uttapam....50/-");
		         bill = bill+50;
		         break;		 			          
	}
	printf("\ndo you want to order something else? ");
	scanf(" %c",&c);
	
	printf("\n");
    } while (c=='y');
    
    
    total = bill;
    printf("Total bill : %d\n\n",total);
    printf("      THANK YOU \n PLEASE VISIT AGAIN");	
}
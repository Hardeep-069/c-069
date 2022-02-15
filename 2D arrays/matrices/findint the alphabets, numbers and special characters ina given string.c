#include<stdio.h>
#include<string.h>

main()
{
	int alphabet_count=0,number_count=0,i=0,blank_count=0,splchar_count=0;
	char sentence[20];
	
	printf("enter a sentence : ");
	gets(sentence);
	
	while(sentence[i]!='\0')
	{
		if((sentence[i]>=97 && sentence[i]<=122) || (sentence[i]>=65 && sentence[i]<=90))
		alphabet_count++;
		
		else if(sentence[i]>='0' && sentence[i]<='9')
		number_count++;
		
		
		else if(sentence[i]==' ')
		blank_count++;
		
		
		else
		splchar_count++;
		
		i++;
	}
	
	printf("alphabets=%d  \nnumbers=%d  \nspecial characters=%d",alphabet_count,number_count,splchar_count);
}
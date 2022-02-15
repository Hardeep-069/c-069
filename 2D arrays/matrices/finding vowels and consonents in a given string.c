#include<stdio.h>
#include<string.h>

main()
{
	int vovel_count=0,consonant_count=0,i=0,blank_count=0;
	char sentence[20];
	
	printf("enter a sentence : ");
	gets(sentence);
	
	while(sentence[i]!='\0')
	{
		if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u')
		vovel_count++;
		
		else if(sentence[i]==' ')
		blank_count++;
		
		else
		consonant_count++;
		
		i++;
	}
	
	printf("vowels=%d \nconsonants=%d",vovel_count,consonant_count);
}
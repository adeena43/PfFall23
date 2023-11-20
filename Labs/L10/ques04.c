#include<stdio.h>
#include<string.h>

void reverse(char *start, char* end)
{
	while(start<end)
	{
		char temp = *start;
		*start=*end;
		*end = temp;
		start++;
		end--;
	}
}

int main()
{
	char sentence[1000];
	printf("Enter the sentence: ");
	fgets(sentence, sizeof(sentence), stdin);
	
	size_t len = strlen(sentence);
	if(sentence[len-1]=='\n')
	{
		sentence[len-1]='\0';
	}
	
	//tokenizing the sentence to maintain the order of the words while reversing the sentencee
	char *token = strtok(sentence, " ");
	while(token!=NULL)
	{
		reverse(token, token+strlen(token)-1);
		printf("%s ",token);
		token = strtok(NULL, " ");
	}
}

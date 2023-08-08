#include<stdio.h>
#include<string.h>
int main()
{
	char input[30];
	int len;
	printf("Enter a line of text:");
	scanf("%[^\n]s",input);
	if(input[0]=='/' && input[1]=='/')
	{
		printf("single line command");
	}
	else if (input[0]=='/'&& input[1]=='*')
	{
		printf("Multiline command");
    }
		else
		{
			printf("Not a command");
	  }
	return 0;
}
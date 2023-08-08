#include<stdio.h>
#include<conio.h>
int main()
{
	char input[5];
	printf("Enter the operator:");
	scanf("%s",input);
	switch(input[0])
	{
		case'>':
			if(input[1]=='=')
			{
				printf("grater than equal");
			}
			else
			{
				printf("grater then");
			}
		    break;
		case'&':
			if(input[1]=='&')
			{
				printf("logical AND");
			}
			else
			{
				printf("Bitwise AND");
			}
			break;
		case'|':
			if(input[1]=='|')
			{
				printf("logical OR");
			}
			else
			{
				printf("Bitwise OR");
			}
			break;
		case'<':
			if(input[1]=='=')
			{
				printf("less than or equal");
			}
			else
			{
				printf("less than");
			}
			break;
		case'!':
			if(input[1]=='=')
			{
				printf("Not equal");
			}
			else
			{
				printf("Bitwise not ");
			}
			break;
		case'+':
			{
				printf("Addition");
			}
			break;
		case'-':
			{
				printf("Subtration");
			}
			break;
		case'*':
			{
				printf("Multiplication");
			}
			break;
		case'/':
			{
				printf("Division");
			}
			break;
		case'%':
			{
				printf("Modulus");
			}
			break;
		default:
			{
				printf("\n Not a operator");
			}
	}
	
}
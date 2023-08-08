#include<stdio.h>
int main()
{
	char str[100];
	int words=0,newline=0,character=0;
	int i;
	printf("enter the text");
	scanf("%[^~]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
		words++;
     	}
		else if(str[i]=='\n')
		{
		words++;
		newline++;
	    }
		else 
		{
		character++;
        }
	}  
	if(character>0)
	{
		words++;
		newline++;
	}
	printf("words= %d \n",words);
	printf("newline=%d \n",newline);
	printf("character=%d \n",character);
	return 0;
}
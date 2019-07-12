//input: My name is Arunav.
//output:Arunav is name my



#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char str[100];
	char newStr[10][10];
	int i,j=0,k=0;


	printf("Enter a string:\n");
	scanf("%[^\n]%*c",str);


	for(i=0;i<=(strlen(str));i++)
	{
		if(str[i]==' ' || str[i]=='\0')
		{
			newStr[j][k]='\0';
			j++;//next word
			k=0;
		}

		else
		{
			newStr[j][k]=str[i];
			k++;
		}
	}

	for(i=j;i>=0;i--)
	{
		printf("%s ",newStr[i]);
	}

	return 0;
}
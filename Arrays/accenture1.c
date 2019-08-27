//input: 2 strings of any size. for every string we have to find the cost. Cost of a=1.b=2,....,z=26.
//return the string which have greater cost.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char s1[10],s2[10];

	printf("Enter both the strings:");

	scanf("%s%s",&s1,&s2);

	int cost1=0;
	int cost2=0;
	int i,n1,n2;

	n1=strlen(s1);
	n2=strlen(s2);

	for(i=0;i<n1;i++)
	{
		cost1=cost1+(s1[i]-97)+1;
	}

	for(i=0;i<n1;i++)
	{
		cost2=cost2+(s2[i]-97)+1;
	}

	if(cost1>cost2)
	{
		printf("%s",s1);
	}

	else if(cost1<cost2)
	{
		printf("%s",s2);
	} 

	return 0;

}
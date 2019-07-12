//Step 1: Take a string from user.
//Step 2: Check if after rearranging the string can it form a pallindrome or not.
//Step 3: Return Yes or No.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void checkForPallindrome(char str[],int n)
{
	int i;
	int count=0;
	int* freq=NULL;//frequency array to count the occurence

	freq=(int*)calloc(26,sizeof(int));


	for(i=0;i<n;i++)
	{
		//for lower case character
		if(str[i]>='a' && str[i]<='z')
		{
			freq[str[i] - 97]++;
		}

		//for upper case character
		if(str[i]>='A' && str[i]<='Z')
		{
			freq[str[i] - 65]++;
		}
    }

    for(i=0;i<26;i++)
    {
    	if(freq[i]%2!=0)
    	{
    		count++;
    	}
    }

    if(count>1)
    {
    	printf("No\n");
    }
    else
    {
    	printf("Yes\n");
    }

}


int main()
{
	char str[100];
	int i,n;

	printf("Enter a string  string:");
    scanf("%s", str);
	

	n=strlen(str);

	checkForPallindrome(str,n);

	return 0;
}
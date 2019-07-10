//Take an integer from user
//then find sum of its factors.
//then return the reverse of the sum



#include<stdio.h>
#include<stdlib.h>


int reversDigits(int num)
{
	int rev_num=0;

	while(num>0)
	{
		rev_num=rev_num*10+ num%10;
		num=num/10;
	}

	return rev_num;
}

int main()
{
	int i,num,sum=0;

	printf("Enter an number:\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			{
				sum=sum+i;
			}
	}

	printf("sum of factors of %d is:%d\n",num,sum);
	printf("Reverse of no. is %d", reversDigits(sum)); 
  

  	return 0;

}
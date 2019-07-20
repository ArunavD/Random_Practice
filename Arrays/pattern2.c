//yet to complete

//print the pattern as follows
//input1:4
//output1:
//1
//3*2
//4*5*6
//10*9*8*7


//input2:5
//output2:
//1
//3*2
//4*5*6
//10*9*8*7
//11*12*13*14*15

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,l,x;
	int k=1;
	printf("enter no of rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",k);
				k++;
				l=k;
				if(j<i)
				{
					printf("*");
				}	
			}

		}


		if(i%2==0)
		{
			x=2*l-(i-1);
			for(j=1;j<=i;j++)
			{
				printf("%d",x);
				x--;
				k++;
				if(j<i)
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
}
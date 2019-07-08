//print a pattern as follows...
//for n=5
//1
//2 6
//3 7 10
//4 8 11 13
//5 9 12 14 15



#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,n;

	printf("Enter no of rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		int p=i,k=n-1;
		for(j=1;j<=i;j++)
		{
			printf("%d ",p);
			p=p+k;
			k--;
		}
		printf("\n");
	}
}
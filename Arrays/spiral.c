// print an array in spiral form starting from 1st value in clock wise direction.

#include<stdio.h>
#include<stdlib.h>


void PrintSpiral(int **A,int m,int n)
{
	int i,k=0,l=0;
	while(k<m && l<n)
	{
		for(i=l;i<n;i++)
		{
			printf("%d",A[k][i]);
		}
		k++;
		
		for(i=k;i<m;i++)
		{
			printf("%d",A[i][n-1]);
		}
		n--;
		
		if(k<m)
		{
			for(i=n-1;i>=1;i--)
			{
				printf("%d",A[m-1][i]);
			}
		m--;
		}

		if(l<n)
		{
			for(i=m-1;i>=k;i--)
			{
				printf("%d",A[i][l]);
			}
			l++;
		}
	}
}


int main()
{
	int r,c,i,j,m=0,n=0;
	printf("Enter no of rows and columns:");
	scanf("%d %d",&r,&c);
	int **arr=(int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
		arr[i]=(int*)malloc(c*sizeof(int));
	

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter values:");
			scanf("%d",&arr[i][j]);

		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\narr[%d][%d]=%d\n",i,j,arr[i][j]);
                }

	}
	PrintSpiral(arr,r,c);
	return 0;
}




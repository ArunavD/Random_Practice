//dynamically alocate a 2D array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r,c,i,j;
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
	return 0;
}

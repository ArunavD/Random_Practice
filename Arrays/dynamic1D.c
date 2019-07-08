//Dynamically allocated a 1D array and print all the values


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr=NULL; //pointer to integer
	int n;// variable store no of blocks
	int i;// loop variable
	printf("Enter no of elements in the array:");
	scanf("%d",&n);// taking input for no of blocks
	
	arr=(int*)malloc(n*(sizeof(int)));
	
	//To check memory validity
	if(arr==0)
	{
		return 1;
	}

	//to take the values
	
	printf("enter values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	//to print all values
	for(i=0;i<n;i++)
	{
		printf("\narr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}

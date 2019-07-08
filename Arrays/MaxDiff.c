//Given an array arr[] of integers,find out the maximum difference between any two elements such that larger element appears after the smaller in arr[].
//Example:
//1) If array is [2,3,10,6,4,8,1] then return value should be 8 (difference between 10 and 2).
//2)_If array is [7,9,5,6,3,2] then return value should be 2 (difference between 7 and 9).


#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *arr= NULL;
	int n,i,j;
	int max=0;
	int dif=0;

	printf("Enter no of elements in the array:");
	scanf("%d",&n);

	arr=(int*)malloc(n*(sizeof(int)));


	//taking values
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				dif=arr[j]-arr[i];
				
				if(dif>max)
				{
					max=dif;
				}
				else
					continue;
			}
			else{
				continue;
			}
		}
	}
	printf("%d\n",max);

}	

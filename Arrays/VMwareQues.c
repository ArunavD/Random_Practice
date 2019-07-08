//VMware campus recruitment


//Given an array of integers(both odd and even), sort them in such a way that the 1st part of the array contains odd number sorted in desending order, rest portion contains even numbers sorted in ascending order.
//examples:
//input(1): arr[]={1,2,3,5,4,7,10}
//output(1): arr[]={7,5,3,2,4,10}
//input(2): arr[]={0,4,5,3,7,2,1}
//output(2): arr[]={7,5,3,1,0,2,4}


#include<stdio.h>
#include<stdlib.h>


void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 


int main()
{
	int *arr= NULL;
	int n,i;

	printf("Enter number of elements in the array:");
	scanf("%d",&n);
	arr=(int*)malloc(n*(sizeof(int)));

	//to take values
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    

	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			arr[i]=arr[i]*(-1);
		}
	}

    insertionSort(arr,n);

    for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			arr[i]=arr[i]*(-1);
		}
	}

    for(i=0;i<n;i++)
    {
		printf("%d ",arr[i]);
	}	



}

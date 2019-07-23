// Given an array with n distinct elements, convert the given array to a reduced form where all elements are in range from 0 to n-1. The order of elements is same, i.e., 0 is placed in place of smallest element, 1 is placed for second smallest element, … n-1 is placed for largest element.

// Input:

// The first line of input contains an integer T denoting the number of test cases.
// The first line of each test case is N, where N is the size of array.
// The second line of each test case contains N input arr[i].

// Output:

// Print the reduced form of the array.

// Constraints:

// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 200
// 1 ≤ arr[i] ≤ 1000

// Example:

// Input:
// 2
// 3
// 10 40 20
// 5
// 5 10 40 30 20

// Output:
// 0 2 1
// 0 1 4 3 2



void reducedForm(int*,int);
void insertionSort(int*,int);

#include<stdio.h>
#include<stdlib.h>

//initializing functions
void reducedForm(int*,int );
void insertionSort(int* , int ) ;


//driver code
int main() 
{
	int i,a,T;
	
	
	scanf("%d",&T);//T no of test cases
	for(a=1;a<=T;a++)//loop for different test cases
	{
	    int N;
	    int* arr=NULL;
	    
	    scanf("%d",&N);//No of elements in the array
	    arr=(int*)malloc(N*(sizeof(int)));
	    
	    //taking array values
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    reducedForm(arr,N);
	    
	}
	return 0;
}

void reducedForm(int* arr,int N)
{
    int i,j;
    int count=0;
    int* temp=NULL;
    temp=(int*)malloc(N*(sizeof(int)));
    
    for(i=0;i<N;i++)
    {
        temp[i]=arr[i];
    }
    
    insertionSort(temp,N);
    //sorting temp array
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(temp[i]==arr[j])
            {
                arr[j]=count;
                count++;
            }
        }
    }
    
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");
}

void insertionSort(int* arr, int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
  
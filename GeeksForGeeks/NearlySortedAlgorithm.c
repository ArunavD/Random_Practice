#Given an array of n elements, where each element is at most k away from its target position. The task is to print array in sorted form.

#Input:
#First line consists of T test cases. First line of every test case consists of two integers N and K, denoting number of elements in array and at most k positions away from its target position respectively. Second line of every test case consists of elements of array.

#Output:
#Single line output to print the sorted array.

#Constraints:
#1<=T<=100
#1<=N<=100
#1<=K<=N

#Example:
#Input:
#2
#3 3
#2 1 3
#6 3
#2 6 3 12 56 8
#Output:
#1 2 3
#2 3 6 8 12 56


#include<stdio.h>
#include<stdlib.h>
void insertionSort(int*,int);
int main() 
{
    int T,N,K,i,j;
    int* arr=NULL;
    scanf("%d",&T);
    
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&N,&K);
        arr=(int*)malloc(N*(sizeof(int)));
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[j]);
        }
        insertionSort(arr,N);
        for(j=0;j<N;j++)
        {
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
    
	
	return 0;
}
void insertionSort(int* arr, int n) 
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
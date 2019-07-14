// Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

// Expected Time Complexity: O(n)

// Input:
// The first line of input contains an integer T, denoting the number of testcases. Then T test cases follow. Each test case consists of three lines. First line of each testcase contains an integer N denoting size of the array. Second line contains N space separated integer denoting elements of the array. Third line of the test case contains an integer K.

// Output:
// Corresponding to each test case, print the kth smallest element in a new line.

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 105
// 1 <= arr[i] <= 105
// 1 <= K <= N

// Example:
// Input:
// 2
// 6
// 7 10 4 3 20 15
// 3
// 5
// 7 10 4 20 15
// 4

// Output:
// 7
// 15

#include <stdio.h>
#include<stdlib.h>

void insertionSort(int arr[],int n,int k)
{
    int key,j,i;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        
    }
    
    
    printf("%d\n",arr[k-1]); 
    
    return 0;
}

int main() 
{
    int T,N,K;
    scanf("%d",&T);
    // T no of test cases
    
    for(int i=0;i<T;i++)
    {
        int j;
        scanf("%d",&N);
        // N no of elements in the array
        
        int arr[N];
        
        //taking values
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[j]);
        }
        
        
        scanf("%d",&K);
        //taking the integer value
        
        insertionSort(arr,N,K);
        
    }
    
    return 0;
}
// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

// Input:
// The first line of the input contains T denoting the number of testcases. First line of eacg test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

// Output:
// For each testcase, in a new line, output the rotated array.

// Constraints:
// 1 <= T <= 200
// 1 <= N <= 107
// 1 <= D <= N
// 0 <= arr[i] <= 105

// Example:
// Input:
// 2
// 5 2
// 1 2 3 4 5 
// 10 3
// 2 4 6 8 10 12 14 16 18 20

// Output:
// 3 4 5 1 2
// 8 10 12 14 16 18 20 2 4 6



#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        int N,D,j,k;
        int* arr=NULL;
        int* arr1=NULL;
        
        scanf("%d%d",&N,&D);
        
        arr=(int*)malloc(N*(sizeof(int)));
        arr1=(int*)malloc(D*(sizeof(int)));
        
        //taking array values
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[j]);
        }
        
        //storing 1st D values into a temporary array
        
        for(j=0;j<D;j++)
        {
            arr1[j]=arr[j];
        }
        
        //rotating
        for(k=1;k<=D;k++)
        {
            for(j=0;j<N;j++)
            {
                 arr[j]=arr[j+1];
            }
        }
        
       
        //storing them back to main array
        
        int count=0;
        for(j=N-D;j<N;j++)
        {
            arr[j]=arr1[count];
            count++;
        }
        
        for(j=0;j<N;j++)
        {
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
	
	return 0;
}
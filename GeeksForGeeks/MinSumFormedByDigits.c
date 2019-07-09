// Given an array of digits (values are from 0 to 9), find the minimum possible sum of two numbers formed from digits of the array. All digits of given array must be used to form the two numbers.

// Input:

// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Next line of each test contains N space seperated integers denoting the elements of the array.
// Output:

// For each test case output a single line containing the required sum.
// Constraints:

// 1<=T<=100
// 1<=N<=50
// Example:

// Input

// 2
// 6
// 6 8 4 5 2 3
// 5
// 5 3 0 7 4

// Output

// 604
// 82



#include <stdio.h>
#include<stdlib.h>
#include<math.h>

void insertionSort(int*,int);
int main() 
{
    int T,K,i,N,j;
    int* arr=NULL;
    scanf("%d",&T);
    for(i=1;i<=K;i++)
    {
        scanf("%d",&N);
        arr=(int*)malloc(N*(sizeof(int)));
        //taking values
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[j]);
        }
       insertionSort(arr,N);
       //sorted array
       
        int num1=0;
        int num2=0;
        
        for(j=0;j<N;j++)
        {
            if(j%2!=0)
            {
               num1=num1*10+arr[i];
            }
            
            else
            {
                num2=num2*10+arr[i];
            }
        }
        
        int sum=0;
        sum=num1+num2;
        
        printf("%d\n",sum);
        
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
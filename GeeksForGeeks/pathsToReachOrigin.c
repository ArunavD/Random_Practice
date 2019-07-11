// You are standing on a point (n, m) and you want to go to origin (0, 0) by taking steps either left or down i.e. from each point you are allowed to move either in (n-1, m) or (n, m-1). Find the number of paths from point to origin.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two integers n and m representing the point.

// Output:
// For each testcase, in a new line, print the total number of paths from point to origin.

// Constraints:
// 1 <= T<= 100
// 1 <= n, m <= 25

// Example:
// Input:
// 3
// 3 2
// 3 6
// 3 0

// Output:
// 10
// 84
// 1



#include<stdio.h>
#include<stdlib.h>


int countPaths(int n, int m) 
{ 
    // If we reach bottom or top left, we are 
    // have only one way to reach (0, 0) 
    if (n==0 || m==0) 
        return 1; 
  
    // Else count sum of both ways 
    return (countPaths(n-1, m) + countPaths(n, m-1)); 
} 

int main() {
	
	int T,i;
	int count=0;
	scanf("%d",&T);
	//No of test cases
	
	for(i=1;i<=T;i++)
	{
	    int n,m;
	    scanf("%d%d",&n,&m);
	    
	    printf("%d\n",countPaths(n,m));
	}    
	return 0;
}
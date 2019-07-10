//Value Labs Campus recruitment technical PI question........
//Write a program to find the third largest element in an array.

#include<stdio.h>
#include<stdlib.h>


int thirdLargest(int* arr,int size)
{
	int first=arr[0],second=-4444,third=-5555;
	int i;
	

	for(i=0;i<size;i++)
	{
		if(arr[i]>first)
		{
			third=second;
			second=first;
			first=arr[i];
		}

		else if(arr[i]>second)
		{
			third=second;
			second=arr[i];
		}
		else if(arr[i]>third)
		{
			third=arr[i];
		}

	}
	printf("third largest element is:%d\n",third);
	return 0;
}


int main()
{
	int* arr=NULL;
	int i,size;

	printf("Enter no of elements in the array\n");
	scanf("%d",&size);

	arr=(int*)malloc(size*(sizeof(int)));

	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	thirdLargest(arr,size);

	

	return 0;
}
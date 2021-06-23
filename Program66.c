// Accept number from user and display that numbers.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)				//Step 6
{
	int i =0;

	printf("Elements of array are :");
	for(i=0;i<iSize;i++)
	{
		printf("%d\t",Arr[i]);

	}
	printf("\n");
}
int main()
{	
	int *arr = NULL;  							//Step 1
	int iLength  =  0 , i = 0;

	printf("Enter number of elements : " );		//Step 2
	scanf("%d",&iLength);
	printf("\n");

	arr = (int*)malloc(iLength *sizeof(int));	//Step 3

	printf("Enter the elements :");				//Step 4
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	
	Display(arr,iLength);						//Step 5

	free(arr);									//Step 7

	return 0;
}
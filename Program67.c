//Accept N number from user and display only even numbers 
#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iSize)
{
	int i = 0;

	if((Arr == NULL) || (iSize == -1))
	{
		return;
	}

	printf("Even elements are : ");
	for(i = 0;i<iSize;i++)
	{
		if((Arr[i]%2) == 0)
		{
			printf("%d\t",Arr[i]);
		}
	}
}

int main()
{
	int *arr = NULL;
	int iLent =0, i = 0;

	printf("Enter number of elements : ");
	scanf("%d",&iLent);

	arr =(int*)malloc(iLent *sizeof(int));

	if(arr == NULL)
	{
		printf("Unable to allocate memory ");
		return -1;
	}
	printf("Enter the elements : ");
	for(i=0;i<iLent;i++)
	{
		scanf("%d",&arr[i]);
	}

	DisplayEven(arr,iLent);

	free(arr);

	return 0;
}
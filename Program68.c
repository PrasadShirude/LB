//Accept N number from user and	return Sum of that N numbers.

#include<stdio.h>
#include<stdlib.h>

int DisplaySum(int Arr[],int iSize)
{
	int i=0, iSum =0;
	if((Arr == NULL) || (iSize == -1))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		iSum = iSum + Arr[i];
	}

	return iSum;
}

int main()
{
	int *arr = NULL;
	int iLent =0,i=0,iRet =0;

	printf("Enter number of elements :");
	scanf("%d",&iLent);

	arr = (int*)malloc(iLent * sizeof(int));

	if(arr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter the elements :");
	for(i=0;i<iLent;i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet = DisplaySum(arr,iLent);

	printf("Sum of N numbers is : %d",iRet);

	free(arr);

	return 0;

}
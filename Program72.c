//Accept  N numbers from user and accept number No  and return display first occurence of the number
 
#include<stdio.h>
#include<stdlib.h>

int FirstOccuenrence(int Arr[],int iSize,int iNo)
{
	int i =0;

	if((Arr == NULL) || (iSize == -1))
	{
		return -1;
	}

	for(i =0;i<iSize;i++)
	{
		if(Arr[i] == iNo)
		{
			break;
		}
	}
	if(i == iSize)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int main()
{
	int i =0 ,iLen =0, iRet = 0, iValue;

	int *arr = NULL;

	printf("Enter number of elements : ");
	scanf("%d",&iLen);

	printf("Enter number :");
	scanf("%d",&iValue);

	arr= (int*)malloc(iLen * sizeof(int));

	if(arr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter the elements : ");
	for(i =0;i<iLen;i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet = FirstOccuenrence(arr,iLen,iValue);

	printf("First Occuenrence is at %d",iRet);

	free(arr);

	return 0;


}
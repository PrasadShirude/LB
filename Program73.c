//Accept  N numbers from user and accept number No  and return display first occurence of the number
 
#include<stdio.h>
#include<stdlib.h>

int LastOccuenrence(int Arr[],int iSize,int iNo)
{
	int i =0;

	if((Arr == NULL) || (iSize == -1))
	{
		return -1;
	}

	for(i =iSize-1;i>=0;i--)
	{
		if(Arr[i] == iNo)
		{
			break;	
		}
	}
	
		return i;
	
	
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

	iRet = LastOccuenrence(arr,iLen,iValue);

	printf("Last Occuenrence is at %d",iRet);

	free(arr);

	return 0;


}
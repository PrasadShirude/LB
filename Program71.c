/*
5. Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
	int iCnt =0, iCount =0;

	
	if((Arr == NULL) || (iSize == -1))
	{
		return -1;
	}

	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iCnt =0 ,iLen = 0, iValue = 0, iRet = 0;

	int *arr = NULL;

	printf("Enter the number of Elements : ");
	scanf("%d",&iLen);

	printf("Enter the number : ");
	scanf("%d",&iValue);

	printf("Enter the Elements : ");

	for(iCnt =0; iCnt < iLen; iCnt++)
	{
		scanf("%d",&arr[iCnt]);
	}

	iRet = Frequency(arr,iLen,iValue);

	printf("Frequency  is %d",iRet);

	free(arr);

	return 0;
}
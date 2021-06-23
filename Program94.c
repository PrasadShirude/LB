/*
	Accept number from user and return the count of om bits
*/
#include<stdio.h>

int CountOnBit(unsigned int iNo)
{	
	unsigned int iDigit = 0;
	int iCnt =0;
	if(iNo < 0)
	{
		return -1;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 2;
		if(iDigit ==1)
		{
			iCnt++;
		}
		iNo = iNo / 2;

	}
	return iCnt;
}

int main()
{
	unsigned int iValue = 0;
	int iRet =0;
	printf("Enter the number : ");
	scanf("%u",&iValue);

	iRet = CountOnBit(iValue);

	printf("Frequrncy of on bits is %d \n",iRet);
	return 0;
}
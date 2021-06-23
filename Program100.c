/*
Aceppt number and check whether 3rd , 5th , 7th bit is on or off
*/
#include<stdio.h>
#include<stdbool.h>


bool Check357Bit(unsigned int iNo)
{
	unsigned int iMask = 0x00000054;
	unsigned int iResult  =0 ;

	iResult = iNo & iMask;
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	unsigned int iValue = 0 ;
	bool bRet;

	printf("Enter number : ");
	scanf("%u",&iValue);

	bRet = Check357Bit(iValue);

	if(bRet == true)
	{
		printf("3rd,5th, 7th bit is ON\n");
	}
	else
	{
		printf("3rd,5th,7th bit is OFF\n");
	}
}

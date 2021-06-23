/*
Accet number from user and check wether the 5th bit is on or off
*/

#include<stdio.h>
#include<stdbool.h>


bool Check5Bit(unsigned int iNo)
{
	unsigned int iMask = 0x00000010;
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

	bRet = Check5Bit(iValue);

	if(bRet == true)
	{
		printf("5th bit is ON\n");
	}
	else
	{
		printf("5th bit is OFF\n");
	}
}



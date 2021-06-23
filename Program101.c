/*
Aceppt number and position from user and check whether the bit at given position is on or off
*/
#include<stdio.h>
#include<stdbool.h>


bool CheckBit(unsigned int iNo,unsigned int iPos)
{	
	if((iPos < 1) || (iPos > 32))
	{
		return false;
	}

	unsigned int iMask = 0x00000001;
	unsigned int iResult  =0 ;

	iMask = iMask << (iPos -1);

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
	unsigned int iValue = 0, iPos = 0 ;
	bool bRet;

	printf("Enter number : ");
	scanf("%u",&iValue);

	printf("Enter position :");
	scanf("%d",&iPos);

	bRet = CheckBit(iValue,iPos);

	if(bRet == true)
	{
		printf("%u th bit is ON\n",iPos);
	}
	else
	{
		printf("%u th bit is OFF\n",iPos);
	}
}

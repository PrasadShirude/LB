/*
Aceppt number and position from user and toggle the bit at given position 
*/
#include<stdio.h>
#include<stdbool.h>


bool CheckBit(unsigned int iNo,unsigned int iPos1,unsigned int iPos2)
{	
	if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
	{
		return false;
	}

	unsigned int iMask1 = 0x00000001;
	unsigned int iMask2 = 0x00000001;
	unsigned int iMask = 0x00000000;
	unsigned int iResult  =0 ;



	iMask1 = iMask1 << (iPos1 -1);
	iMask2 = iMask2 << (iPos2 -1 );

	
	iMask = iMask1 | iMask2;

	iResult = iNo & iMask;
	
	if(iResult == iMask )
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
	unsigned int iValue = 0, iPos1 = 0 , iPos2 = 0;
	bool bRet;

	printf("Enter number : ");
	scanf("%u",&iValue);

	printf("Enter position 1:");
	scanf("%u",&iPos1);

	printf("Enter position 2:");
	scanf("%u",&iPos2);

	bRet = CheckBit(iValue,iPos1,iPos2);

	if(bRet == true)
	{
		printf("Bits are ON\n");
	}
	else
	{
		printf("Bits are OFF\n");
	}

	return 0;

}

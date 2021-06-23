// Toggle the bit

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
	UINT iMask = 0x00000001, iResult = 0;

	iMask = iMask << (iPos -1);

	iResult = iNo ^ iMask;

	return iResult;

}

int main()
{
	UINT iValue =0 , iPos =0, iRet =0;

	printf("Enter number : ");
	scanf("%u",&iValue);

	printf("Enter position :");
	scanf("%u",&iPos);

	iRet = ToggleBit(iValue,iPos);

	printf("New number : %u",iRet);

	return 0;
}
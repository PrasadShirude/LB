//Accept number , position from user and off the at the position 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
	if((iPos < 1 ) || (iPos >32))
	{
		return -1;
	}

	UINT iMask = 0x00000001;
	UINT iResult = 0;

	iMask = iMask << (iPos -1 );
	iMask = ~iMask;
	iResult = iNo & iMask;

	return iResult;

}

int main()
{
	UINT iValue = 0 , iPos =0;
	UINT iRet = 0;
	printf("Enter number : ");
	scanf("%u",&iValue);

	printf("Enter position : ");
	scanf("%u",&iPos);

	iRet = OffBit(iValue,iPos);

	printf("New number is %u\n",iRet);
	return 0;
}
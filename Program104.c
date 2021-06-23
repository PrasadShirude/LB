//Accept number , position from user and if bit at the position is OFF make it ON otherwise do
// nothing 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo,UINT iPos)
{
	if((iPos <1 ) || (iPos >32))
	{
		return -1;
	}

	UINT iMask = 0x00000001;
	UINT iResult = 0;

	iMask = iMask << (iPos -1 );
	iResult = iNo | iMask;

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

	iRet = OnBit(iValue,iPos);

	printf("New number is %u\n",iRet);
	return 0;
}
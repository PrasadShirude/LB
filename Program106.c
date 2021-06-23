// Accpet number and count the number of ON bits

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT CountOnBit(UINT iNo)
{
	

	UINT iMask = 0x00000001, iResult = 0;
	UINT iCnt = 0,i = 0;

	for(i = 0;i<32;i++ )
	{
		iResult = iNo & iMask;
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}
	return iCnt;

}

int main()
{
	UINT iValue = 0 ;
	UINT iRet = 0;
	printf("Enter number : ");
	scanf("%u",&iValue);

	iRet = CountOnBit(iValue);

	printf("No.of ON Bit is %u\n",iRet);
	return 0;
}
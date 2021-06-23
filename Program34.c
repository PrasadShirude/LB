

#include<stdio.h>

int MinMax(int iNo)
{
	int iDigit =0, iMin =9, iMax =0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		if(iDigit < iMin)
		{
			iMin = iDigit;
		}		
		iNo = iNo /10;
	}
	return (iMax - iMin);
}

int main()
{
	int iValue = 0;
	int iRet =0;
	printf("Enter number : ");
	scanf("%d", &iValue);

	iRet = MinMax(iValue);

	printf("Difrence between max and min is %d",iRet);
}
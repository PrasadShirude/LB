#include<stdio.h>

int DigitFrequency(int iNo,int i)
{	
	int iDigit =0;
	int iFreq =0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	if((i < 0) || (i > 9))
	{
		printf("Invalid Input\n");
		return 0;
	
	}

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iNo = iNo/10;
		if(iDigit == i)
		{
			iFreq++;
		}
	}
	return iFreq++;
}

int main()
{
	int iValue1 =0, iValue2 =0, iRet =0;

	printf("Enter the number:");
	scanf("%d",&iValue1);

	printf("Enter the number you want to search :");
	scanf("%d",&iValue2);

	iRet = DigitFrequency(iValue1,iValue2);

	printf("Number of %d present in %d is %d",iValue2,iValue1,iRet);

	return 0;

}
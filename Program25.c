// Accept number from user and return multiplication of number

//Input : 7521
//Output : 70

//Input :4502 
//Ouytut :40


#include<stdio.h>

int MultDigit(int iNo)
{	
	int iCnt =0;
	int iDigit =0;
	int iMult=1;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iNo = iNo/10;

		if(iDigit != 0)
		{
			iMult = iMult * iDigit;
		}
	}
	return iMult;
}
int main()
{
	int iValue = 0;
	int iRet =	0;

	printf("Enter the number : ");
	scanf("%d",&iValue);

	iRet = MultDigit(iValue);

	printf("Multiplication of Digits of number %d is %d",iValue,iRet);
	return 0;
}

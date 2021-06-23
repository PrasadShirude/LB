/* Accept number from user and return its factorial

Input = 5
Output = 120    1*2*3*4*5
				5*4*3*2*1

Inout = 6
Output = 720	1*2*3*4*5*6
				6*5*4*3*2*1
*/

#include<stdio.h>

int Fact(int iNo)
{
	int iFact=1;
	int iCnt=0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact = iFact * iCnt;
	}
	return iFact;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number:");
	scanf("%d",&iValue);

	iRet = Fact(iValue);

	printf("Factorial of %d is : %d ",iValue,iRet);

	return 0;
}
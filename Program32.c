/* Accept number from user return the difrence between factors and non-factors of numbers

input : 10
output :18 - 37 (1 + 2 + 5 + 10) -(3 + 4 + 6 + 7 + 8 + 9)
		-19
*/
#include<stdio.h>


int Difference(int iNo)
{
	int iSum1 =0,iSum2 =0 ;
	int iCnt =0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt =1;iCnt <=iNo;iCnt++)
	{
		if(iNo%iCnt == 0)
		{
			iSum1 += iCnt;
		}
		else
		{
			iSum2 += iCnt;
		}
	}
	return iSum1-iSum2;
}

int main()
{
	int iValue=0, iRet =0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = Difference(iValue);

	printf("Diffrence between factors and non-factors of %d is %d",iValue,iRet);

	return 0;
}
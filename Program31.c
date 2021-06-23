#include<stdio.h>
#include<stdbool.h>
typedef unsigned long int INT;
// Time complexitity  : O(N) where N is  the number of digits in the input
int MinDigit(INT iNo)
{	
	
	int iDigit =0;
	int iMin =9;
	

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	

	while(iNo > 0)
	{
	
		iDigit = iNo % 10;
		iNo = iNo/10;

		if(iMin > iDigit)
		{
			iMin = iDigit;
			if(iMin == 0)
			{
				break;
			}
		} 
	}
	return iMin;
}
int main()
{
	INT iValue = 0;
	int iRet =0;

	printf("Enter the number : ");
	scanf("%d",&iValue);

	iRet = MinDigit(iValue);

	printf("Smallest  number digit is %d",iRet);
	


	return 0;
}
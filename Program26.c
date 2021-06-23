/*Accept number from user and return its reverse order

input : 7521
output : 1257

input : 4502
output : 2054

input : 7500
output : 57
*/
#include<stdio.h>

int RevDigit(int iNo)
{	
	int iCnt =0;
	int iDigit =0;
	int iRev =0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iNo = iNo/10;

		iRev = (iRev * 10) + iDigit; 
		
	}
	return iRev;
}
int main()
{
	int iValue = 0;
	int iRet =	0;

	printf("Enter the number : ");
	scanf("%d",&iValue);

	iRet = RevDigit(iValue);

	printf("Reverse of number %d is %d",iValue,iRet);
	return 0;
}
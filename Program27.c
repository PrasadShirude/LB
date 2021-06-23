//Accept number from user and check wether the number is Palindromke or not


#include<stdio.h>
#include<stdbool.h>
// Time complexitity  : O(N) where N is  the number of digits in the input
bool CheckPalindrome(int iNo)
{	
	int iCnt =0;
	int iDigit =0;
	int iRev =0;
	

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	int iNumber = iNo;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iNo = iNo/10;

		iRev = (iRev * 10) + iDigit; 
		
	}
	if( iNumber == iRev)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bRet;

	printf("Enter the number : ");
	scanf("%d",&iValue);

	bRet = CheckPalindrome(iValue);

	if(bRet == true)
	{
		printf("Is Palindromke");
	}
	else
	{
		printf("Is not Palindromke");
	}


	return 0;
}
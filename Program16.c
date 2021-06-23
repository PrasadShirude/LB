/* Accept number from user and check whther that number is Prime or not.

Input : 7
Output : true

Input : 8
Output : false
*/
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>


bool Prime(int iNo)
{	int iCnt =0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt=2;iCnt <= iNo/2;iCnt++)
	{
		if((iNo % iCnt) ==0)
		{
			break;
		}
	
	}
	if((iCnt == (iNo/2)+1))
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
	int iValue=0;
	bool bRet;

	printf("Enter the number:");
	scanf("%d",&iValue);

	bRet = Prime(iValue);

	if(bRet == true)
	{
		printf("  %d is Prime number",iValue);
	}
	else
	{
		printf("  %d is not a Prime number",iValue);
	}

	return 0;
}
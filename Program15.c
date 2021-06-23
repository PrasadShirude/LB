/*Accept number from user and check whether the number is perfect or not

Input : 6
Ouput : True

Input : 12
Output : False
*/

#include<stdio.h>
#include<stdbool.h>

bool Factors(int iNo)
{	int iCnt =0;
	int iSum = 0;

	if(iNo < 0)
		{
			iNo = -iNo;
		}
	for(iCnt=1;iCnt <= iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iNo)
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
	int iNo=0;
	bool bRet;

	printf("Enter the number:");
	scanf("%d",&iNo);

	 bRet =Factors(iNo);

	 if(bRet == true)
	 {
		printf("%d is Perfect number",iNo);
	}
	else
	{
		printf("%d is not a Perfect Numer",iNo);
	}
	return 0;

}
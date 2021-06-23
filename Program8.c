#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo1,int iNo2)
{
	if((iNo1 % iNo2)==0)
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
	int iValue1=0,iValue2=0;
	bool bRet;

	printf("Enter first number:");
	scanf("%d",&iValue1);
	printf("Enter second number:");
	scanf("%d",&iValue2);

	bRet = Check(iValue1,iValue2);

	if(bRet == true)
	{
		printf("%d is divisible by %d",iValue1,iValue2);	
	}
	else
	{
		printf("%d is  not divisible by %d",iValue1,iValue2);	

	}

}
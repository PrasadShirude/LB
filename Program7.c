//Accept number from user and check whether that number is divisible by 3 and 5 or not

//Input : 10
//Output : No


//Input : 15
//Output : Yes
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckDiv(int iNo)
{
	if(iNo%3 ==0 && iNo%5==0)
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

	bRet =CheckDiv(iValue);
	if(bRet == true)
	{
		printf("%d is divisible by 3 & 5",iValue);
	}
	else
	{
		printf("%d is not divisible by 3 & 5",iValue);
	}
	return 0;
}
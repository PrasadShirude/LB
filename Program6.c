//Accept number from user and whether that  number is even or odd
//Input : 4
//Output : Its Even

//Input : 5
//Output : Its odd
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
	if(iNo%2 ==0)
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
	int iValue =0;
	bool bRet;
	printf("Enter the number:");
	scanf("%d",&iValue);

	bRet = CheckEven(iValue);
	if(bRet == true)
	{
		printf("%d is even number",iValue);
	}
	else
	{
		printf("%d is odd number",iValue);
	}
	return 0;
}


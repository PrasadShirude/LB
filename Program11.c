//Accept two numbers from user and return its power 
//Input : 2 4
// Output : 2*2*2*2

//Input : 4 3
// Output : 64 (4*4*4)


#include<stdio.h>

int Power(int iNo1,int iNo2)
{	int ret =1;

	if(iNo1 < 0 )
	{
		iNo1= -iNo1;
	}
	if(iNo2 < 0 )
	{
		iNo2= -iNo2;
	}
	for(int iCnt=1;iCnt<=iNo2;iCnt++)
	{
		ret = ret * iNo1;
	}
	return ret;
}
int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;

	printf("Enter the first number:");
	scanf("%d",&iValue1);

	printf("Enter the second number:");
	scanf("%d",&iValue2);

	iRet =Power(iValue1,iValue2);

	printf("Result is %d",iRet);

	return 0;

}
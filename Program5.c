#include<stdio.h>

int Summation(int iValue)
{
	int iCnt=0;
	int res =1;
	if(iValue == 0)
	{
		return 0;
	}
	
	if(iValue < 0) 	//Input Updater
	{
		iValue = -iValue;
	}
	for(iCnt =1;iCnt<=iValue;iCnt++)
	{	
		 res =res * iCnt;
		//printf("%d\t",iCnt);
				
	}
	return res;
	
} 
int main()
{
	int iNo=0,iCnt=0;
	
	printf("Enter the number:");
	scanf("%d",&iNo);
	
	int iRet =Summation(iNo);
	printf("Summation is:%d",iRet);
	
	return 0;
}
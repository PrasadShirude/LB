#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	if(iNo == 0)
	{
		return;
	}
	
	if(iNo < 0) 	//Input Updater
	{
		iNo = -iNo;
	}
	//for(iCnt =1;iCnt<=iNo;iCnt++)
	for(iCnt=iNo;iCnt>0;iCnt--)
	{
		printf("%d\t",iCnt);		
	}
	
} 
int main()
{
	int iNo=0,iCnt=0;
	
	printf("Enter the number:");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	
	return 0;
}
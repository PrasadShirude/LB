/* Accept number from user display sum of its factors

Input : 12
Output :16         1 2 3 4 6

Input : 20
Output : 22		1 2 4 5 10

*/

#include<stdio.h>

int Factors(int iNo)
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
	return iSum;
}
int main()
{
	int iNo=0;

	printf("Enter the number:");
	scanf("%d",&iNo);

	int iRet =Factors(iNo);
	printf("Sum of Factors : %d",iRet);

	return 0;

}
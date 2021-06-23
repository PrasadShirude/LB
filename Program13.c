/* Accept number from user display its factors

Input : 12
Output : 1 2 3 4 6

Input : 20
Output : 1 2 4 5 10

*/

#include<stdio.h>

void Factors(int iNo)
{	int iCnt =0;

	if(iNo < 0)
		{
			iNo = -iNo;
		}
	for(iCnt=1;iCnt <= iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}
int main()
{
	int iNo=0;

	printf("Enter the number:");
	scanf("%d",&iNo);

	Factors(iNo);

	return 0;

}
/*Accept number and display the factors in reverse order

input : 12
output : 6 4 3 2 1
*/

#include<stdio.h>

void Factors(int iNo)
{
	int iCnt =0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = iNo/2;iCnt >= 1 ;iCnt--)
	{
			if(iNo%iCnt == 0)
			{
				printf("%d \n",iCnt);

			}
	}
}

int main()
{
	int iValue =0;

	printf("Enter number : ");
	scanf("%d",&iValue);

	Factors(iValue);

	return 0;

}
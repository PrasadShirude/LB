#include<stdio.h>

void DisplayDigit(int iNo)
{	
	int iDigit =0;

	if(iNo <0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo/10;

		printf("  %d\n",iDigit);
	}
}
int main()
{	
	int iValue =0;

	printf("Enter the number:");
	scanf("%d",&iValue);

	DisplayDigit(iValue);

	return 0;
}
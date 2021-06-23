/*
	Accept number from user and convert it into  octal number and display it
*/
#include<stdio.h>

void DisplayOctal(unsigned int iNo)
{	
	unsigned int iDigit = 0;

	if(iNo < 0)
	{
		return;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 8;
		printf("%u\t",iDigit);
		iNo = iNo / 8;

	}
}

int main()
{
	unsigned int iValue = 0;

	printf("Enter the number : ");
	scanf("%u",&iValue);

	DisplayOctal(iValue);

	return 0;
}
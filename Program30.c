/* Accept number from user and return the largest digit

input : 12435
output : 5

input : 45783
output : 8

*/

#include<stdio.h>
#include<stdbool.h>
// Time complexitity  : O(N) where N is  the number of digits in the input
int MaxDigit(int iNo)
{	
	
	int iDigit =0;
	int iMax =0;
	

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	

	//while(iNo > 0)
	for( ;iNo > 0;iNo = iNo /10)
	{
		iDigit = iNo % 10;
		//iNo = iNo/10;

		if(iDigit > iMax)
		{
			iMax = iDigit;
			if(iMax == 9)
			{
				break;
			}
		} 
	}
	return iMax;
}
int main()
{
	int iValue = 0;
	int iRet =0;

	printf("Enter the number : ");
	scanf("%d",&iValue);

	iRet = MaxDigit(iValue);

	printf("largest number digit is %d",iRet);
	


	return 0;
}
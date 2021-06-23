/*

input : 4  3
output : * * *
		 * * *
		 * * *
		 * * *
*/


#include<stdio.h>

void Pattern(unsigned int iRow,unsigned int iCol)
{	
	int iCnt1 =0,iCnt2=0;
	
	printf("\n");

	for(iCnt1=1;iCnt1<=iRow;iCnt1++)
	{	printf("\n");
		for(iCnt2=1;iCnt2<=iCol;iCnt2++)
		{
			printf("*\t");
		}
		
	}
	printf("\n");
}
int main()
{
	unsigned int iValue1	 =0,iValue2=0;
	

	printf("Enter number of rows : ");
	scanf("%u",&iValue1);

	printf("Enter number of columns : ");
	scanf("%u",&iValue2);
	

	Pattern(iValue1,iValue2);

	return 0;


}
/*
input : 4
		4
output :
		1	*	*	*
		*	2	*	*
		*	*	3	*
		*	*	*	4
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{	
	int i=0,k=0;

	if(iRow <0)
	{
		iRow = -iRow;
	}

	if(iCol <0)
	{
		iCol =-iCol;
	}
	if(iRow != iCol)
	{
		return;
	}

	for(i=1;i<=iRow;i++)
	{
		for(k=1;k<=iCol;k++)
		{
				if(i == k)
				{
					printf("%d\t",k);
				}
				else
				{
					printf("*\t");
				}
		}
		printf("\n");
	}

}

int main()
{	
	int iValue1 =0, iValue2 =0;

	printf("Enter no.of rows :");
	scanf("%d",&iValue1 );

	printf("Enter no.of columns :");
	scanf("%d",&iValue2);

	Pattern(iValue1,iValue2);

	
	return 0;
}
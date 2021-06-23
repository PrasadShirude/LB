/*
input : iRow : 4
		iCol : 4

output : *	
		 *	*	
		 *	*	*
		 *	*	*	*
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
	
/*
	for(i=1;i<=iRow;i++)
	{
		for(k=iCol;k>=1;k--)
		{
				if(i<k)
				{
					printf(" \t");
				}
				else
				{
					printf("*\t");
				}
				
		}
		printf("\n");
	}
*/
	for(i=iRow;i>=1;i--)
	{
		for(k=1;k<=iCol;k++)
		{
			if(i<=k)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
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
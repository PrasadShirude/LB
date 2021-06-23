/*
input : iRow : 4
		iCol : 4

output : A	
		 A	B
		 A	B	C
		 A	B	C	D
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{	
	int i=0,k=0;
	char ch = '\0';

	if(iRow <0)
	{
		iRow = -iRow;
	}

	if(iCol <0)
	{
		iCol =-iCol;
	}
	

	for(i=1;i<=iRow;i++)
	{
		for(k=1,ch='A';k<=iCol;k++,ch++)
		{
				if(i>=k)
				{
					printf(" %c\t",ch);
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
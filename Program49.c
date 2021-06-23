/*
input : 3
output : A B C

input : 5
output : A B C D E
*/
#include<stdio.h>

void Pattern(unsigned int iNo)
{	
	int iCnt =0;
	char ch = 'A';
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
	{	
		
		printf(" %c\t",ch);		//printf(" %c\t",ch++);	
		//ch++;
	}
	printf("\n");
}
int main()
{
	unsigned int iValue =0;
	

	printf("Enter number : ");
	scanf("%u",&iValue);

	

	Pattern(iValue);

	return 0;


}
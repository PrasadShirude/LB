input : 5 A
output : A A A A A

input : 3 A
output : A A A

#include<stdio.h>

void Pattern(unsigned int iNo,char ch)
{	
	int iCnt =0;
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}
int main()
{
	unsigned int iValue =0;
	char cValue = '\0';

	printf("Enter number : ");
	scanf("%u",&iValue);

	printf("Enter charracter : ");
	scanf(" %c",&cValue);

	Pattern(iValue,cValue);

	return 0;


}
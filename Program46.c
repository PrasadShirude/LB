#include<stdio.h>

void Pattern(unsigned int iNo)
{	
	int iCnt =0;
	printf("\n");
	for(iCnt=1;iCnt <=iNo;iCnt++)
	{
		printf("%d\t*\t",iCnt);
	}#include<stdio.h>

	printf("\n");
}
int main()
{
	unsigned int iValue =0;

	printf("Enter number : ");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0;


}
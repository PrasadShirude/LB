
#include<stdio.h>

void Table(int iNo)
{
	if(iNo <0)
	{
		iNo = -iNo;
	}
	printf("Multiplication table of %d is\n",iNo);
	for(int i=1;i<11;i++)
	{	

		printf("%d * %d= %d\n",iNo,i,iNo*i);
	}
}
int main(int argc, char const *argv[])
{
	int iNo=0;

	printf("Enter the number:");
	scanf("%d",&iNo);

	Table(iNo);
	return 0;
}
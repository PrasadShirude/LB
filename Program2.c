#include"Helper2.h"	//Include the user defined file

int main()
{
	int iNo1=0, iNo2 = 0,imax=0;

	printf("Enter iNo1, iNo2:");
	scanf("%d %d",&iNo1,&iNo2);
	
	imax = Max(iNo1,iNo2);

	printf("Largest no is %d",imax);
	return 0;
}
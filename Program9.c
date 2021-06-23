/*Acceot marks from user and return there result
0-35 	FAIL
35 TO 50 Pass class
50 to 60 Second class
60 to 70 first class
70 to 100 Distinction
*/

#include<stdio.h>

void CheckResult(int iMarks)
{	if(iMarks <0 || iMarks >100)
	{
		printf("Invalid Input\n");
		return;
	}
	if(iMarks <35)
	{
		printf("Fail\n");
	}
	else if((iMarks >= 35) && (iMarks < 50))
	{
		printf("Pass Class\n");
	}
	else if((iMarks >= 50) && (iMarks< 60))
	{
		printf("Second Class\n");
	}
	else if((iMarks >= 60) && (iMarks< 70))	
	{
		printf("First Class\n");
	}
	else 
	{
		printf("Distinction\n");
	}
}

 int main()
{
	int iMarks=0;

	printf("Enter the marks:");
	scanf("%d",&iMarks);

	CheckResult(iMarks);
	return 0;
}
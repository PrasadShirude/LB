#include<stdio.h>

void Display(char str[])
{	
	int iCnt = 0;
	printf("Character from String are :\n");
	//while(str[iCnt] !='\0')
	for(iCnt =0;str[iCnt] !='\0';)
	{	
		printf(" %c\n",str[iCnt]);
		iCnt++;

	}
}

int main()
{
	char Arr[10];

	printf("Enter your name :");
	//scanf("%[^'\n']s",Arr);
	fgets(Arr,10,stdin);
	//gets(Arr);
	//scanf("%s",Arr);

	Display(Arr);

	return 0;
}
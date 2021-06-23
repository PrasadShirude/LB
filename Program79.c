#include<stdio.h>
#include<string.h>

int strlenX(char str[])
{	
	int iCount =0;

	printf("Character from String are :\n");
	while(*str !='\0')
	{	
		printf("%d : %c : %d \n",iCount, *str , *str);
		iCount++;
		 str++;

	}
	

	return iCount;
}

int main()
{	
	int iRet =0;
	char Arr[10];
	
	printf("Enter your name :");
	//scanf("%[^'\n']s",Arr);
	fgets(Arr,10,stdin);
	//gets(Arr);
	//scanf("%s",Arr);

	iRet = strlenX(Arr);
	printf("String Length is : %d",iRet);
	return 0;
}
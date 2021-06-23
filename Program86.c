// Accept String from user and display it in reverse order
#include<stdio.h>

void Display(char str[])
{	
	int iCount =0;

	if(str == NULL)
	{
		return;
	}
	while(*str != '\0')
	{	
		iCount++;
		str++;
		
	}
	str--;
	while(iCount >= 0)
	{
		printf("%c",*str);
		iCount--;
		str--;

	}

}

int main()
{
	char Arr[20];

	printf("Enter the string : ");
	scanf("%[^'\n']s",Arr);

	Display(Arr);
	printf("%s\n",Arr );
	return 0;
}
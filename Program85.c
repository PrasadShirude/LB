/*
	Accpet the string and toggle the case of characters
*/

#include<stdio.h>

void strToggle(char str[])
{	
	if(str == NULL)
	{
		return;
	}

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str =*str + ('a' - 'A');		// 'a' - 'A'  = 32  // *str = *str - 32;
		}
		else if((*str >= 'a') && (*str <= 'z'))
		{
			*str =*str - ('a' - 'A');
		}
		str++;
	}
}

int main()
{
	char Arr[20];

	printf("Enter the string : ");
	scanf("%[^'\n']s",Arr);

	strToggle(Arr);

	printf("Update String is %s\n",Arr);

	return 0;
}
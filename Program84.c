// Accpet the string and convert all the character into small case

#include<stdio.h>

void ConvertSmall(char str[])
{	
	if(str == NULL)
	{
		return;
	}


	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str =*str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];

	printf("Enter the string : ");
	scanf("%[^'\n']s",Arr);

	ConvertSmall(Arr);

	printf("Update String is %s\n",Arr);

	return 0;
}
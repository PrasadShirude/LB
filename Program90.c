/*
	Accept String from user and copy it into another String and change its case to uppercase
	
	Input : Hello
	Output : HELLO

	Input : Demo@123
	Output : DEMO@123

*/
#include<stdio.h>
#include<string.h>

void mystrcpy(const char src[],char des[])
{	
	if(src == NULL || des == NULL)
	{
		return;
	}
	while(*src != '\0')
	{
		if((*src >= 'a' ) && ( *src <= 'z'))
		{
			*des = *src -32;
		}
		else
		{
			*des = *src;
		}
		src++;
		des++;
	}
	*des = '\0';
	
}
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the string : ");
	scanf("%[^'\n']",arr);

	mystrcpy(arr,brr);

	printf("Orignal string is %s\n",arr);
	printf("After copy the string is : %s\n",brr);
	return 0;
}
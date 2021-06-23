/*
	Accept two string from user and concatinate those strings
*/

#include<stdio.h>
#include<string.h>

void myconcat(const char src[],char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return;
	}

	while(*dest != '\0')
	{
		dest++;
	}
	*dest = ' ';
	dest++;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest= '\0';
}

int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the first string : ");
	scanf("%[^'\n']s",arr);

	printf("Enter the  second string : ");
	scanf(" %[^'\n']s",brr);

	myconcat(arr,brr);

	printf("Orignal string is %s\n",arr);
	printf("After concatinating  the string is : %s\n",brr);
	return 0;
}
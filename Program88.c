#include<stdio.h>
#include<string.h>

void mystrcpy(char src[],char des[])
{	
	if(src == NULL || des == NULL)
	{
		return;
	}
	/*int i =0 ;
	while(src[i]!='\0')
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	*/
	while(*src != '\0')
	{
		*des = *src;
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

	printf("After copy the string is : %s\n",brr);
	return 0;
}
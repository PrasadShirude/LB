// Accept String from user and display  reverse of the string
#include<stdio.h>

void ReverseStr(char str[])
{	
	
	char *start,*end;
	char temp;

	start = str;
	end = str;
	if(str == NULL)
	{
		return;
	}
	while(*end != '\0')
	{
		end++;
	}
	end--;
	while(start < end)
	{		
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main()
{
	char Arr[20];

	printf("Enter the string : ");
	scanf("%[^'\n']s",Arr);

	ReverseStr(Arr);
	printf("Reverse String is %s\n",Arr );
	return 0;
}
#include<stdio.h>

void Display(char str[])
{	
	
	printf("Character from String are :\n");
	while(*str !='\0')
	{	
		printf("%c\n",*str);
		str++;

	}
}

int main()
{
	char Arr[10];
	printf("%d\n",sizeof(Arr));
	printf("Enter your name :");
	//scanf("%[^'\n']s",Arr);
	fgets(Arr,10,stdin);
	//gets(Arr);
	//scanf("%s",Arr);

	Display(Arr);

	return 0;
}
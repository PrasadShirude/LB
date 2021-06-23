// Accept string from user and return the count of a

#include<stdio.h>
#include<string.h>

int Countatoz(char str[])
{	
	int iCount =0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str !='\0')
	{	
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCount++;
		 	
		}
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

	iRet = Countatoz(Arr);
	printf("Count of Capital Letters is : %d",iRet);
	return 0;
}
		
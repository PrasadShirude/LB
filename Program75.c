//Accept  N numbers from user  and return minimum  number
 
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
	int i =0, iMin = 0;

	if((Arr == NULL) || (iSize <= 0))
	{
		return -1;
	}

	//iMin = Arr[0];
	for(i=0;i<iSize;i++)
	{
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
	}
	
		return iMin;
	
	
}

int main()
{
	int i =0 ,iLen =0, iRet = 0;

	int *arr = NULL;

	printf("Enter number of elements : ");
	scanf("%d",&iLen);

	if(iLen <=0)
		{	
			printf("Invalid Input\n");
			return -1;
		}

	arr= (int*)malloc(iLen * sizeof(int));

	if(arr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter the elements : ");
	for(i =0;i<iLen;i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet = Minimum(arr,iLen);

	printf("Minimum number is %d",iRet);

	free(arr);

	return 0;


}
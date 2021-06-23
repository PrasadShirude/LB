#include<stdio.h>

void TOH(int n, int A,int B,int C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("Move a Disc from %d to %d\n",A,C);
		TOH(n-1,B,A,C);
	}
	//printf("%d\n",C);
}

int main()
{	

	int A = 1, B = 2, C =3;
	int n = 0;

	printf("Enter the no.of disk u have : ");
	scanf("%d",&n);

	TOH(n,A,B,C);

	return 0;
}
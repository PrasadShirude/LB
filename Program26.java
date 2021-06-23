import java.io.*;
import java.util.*;

class Reverse
{
	int iNo =0;

	public Reverse(int n)
	{
		this.iNo = n;
	}

	public int RevDigit(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		int iRev =0;
		//while(iNo > 0)
		for( ;iNo > 0;iNo = iNo/10)
		{
			int iDigit = iNo % 10;
			//iNo = iNo/10;

			iRev = (iRev*10) + iDigit;
		}
		return iRev;
	}
}

class Program26
{
	public static void main(String ars[])
	{
		Scanner sc = new Scanner(System.in);

		

		System.out.println("Enter the numner : ");
		int iValue = sc.nextInt();

		Reverse rob = new Reverse(iValue);
		int iRet = rob.RevDigit(iValue);

		System.out.println(iRet);

	}
}

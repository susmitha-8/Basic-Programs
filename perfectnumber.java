//to check whether a number is perfect number or not

import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int i=1,n,sum=0;
		n=sc.nextInt();
		while(i<n)
		{
		    if(n%i==0)
		    {
		        sum=sum+i;
		    }
		    i++;
		}
		if(sum==n)
		    System.out.println(n+" is a perfect number");
		else
		    System.out.println(n+" is not a perfect number");
	}
}

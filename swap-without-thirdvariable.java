//swapping two values without third variable
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int a,b;
	    a=sc.nextInt();
	    b=sc.nextInt();
	    System.out.println("Before swap "+a+" "+b);
	    a=a+b;
	    b=a-b;
	    a=a-b;
	    System.out.println("After swap "+a+" "+b);
	}
}

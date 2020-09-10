//to calculate the power of a number
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	  Scanner sc = new Scanner(System.in);
      System.out.println("Enter base ");
      int base = sc.nextInt();
      int temp = base;
      System.out.println("Enter exponent ");
      int exp = sc.nextInt();

      for (int i=1; i<exp; i++){
         temp = temp*temp;
      }
      System.out.println(temp);
	}
}

//remove white spaces from a string
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in); 
        String s = sc.nextLine(); 
		char[] ar= s.toCharArray();  
        StringBuffer stringBuffer = new StringBuffer();  
        for (int i = 0; i < ar.length; i++) {  
            if ((ar[i] != ' ') && (ar[i] != '\t')) {  
                stringBuffer.append(ar[i]);  
            }  
        }  
        String str= stringBuffer.toString();  
        System.out.println(str);  
	}
}
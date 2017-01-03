import java.io.*;
import java.util.*;
import java.math.*;

public class ExtraLongFactorials {

    public static BigInteger factorial(int number) {
        BigInteger factorial = BigInteger.ONE;

        for (int i = number; i > 0; i--) {
            factorial = factorial.multiply(BigInteger.valueOf(i));
        }

        return factorial;
    }

    
    public static void main(String[] args) {
       Scanner in=new Scanner(System.in);
        
        int n=in.nextInt();
        
        System.out.println(factorial(n).toString());
        
    }
}
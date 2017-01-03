import java.io.*;
import java.util.*;
import java.math.*;
public class fibonacciModified {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int t1=in.nextInt();
        int t2=in.nextInt();
        int n=in.nextInt();
        
       BigInteger t11=BigInteger.ONE;
       t11=BigInteger.valueOf(t1);
       BigInteger t22=  BigInteger.ONE;
       t22=BigInteger.valueOf(t2);

        BigInteger num=BigInteger.ONE;
        
        for(int i=3;i<=n;i++){
            num=t11.add(t22.multiply(t22));
            t11=t22;
            t22=num;
            // System.out.println(num.toString());
        }

        System.out.println(num.toString());
    
    }
}
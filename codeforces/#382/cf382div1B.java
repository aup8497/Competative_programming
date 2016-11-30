import java.io.*;
import java.util.*;
//import java.Math.*;

public class cf382div1B{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int i,j,k;

		int n=in.nextInt();
		//int m=in.nextInt();

		if(n==1||n==2||n==3||n==5||n==7){
			System.out.println("1");
		}else if(cf382div1B.isPrime(n)){
			System.out.println("1");
		}else if(cf382div1B.isPrime(n-2)){
			System.out.println("2");
		}else if(n%2==0){
			System.out.println("2");
		}else {
			System.out.println("3");
		}

//			System.out.println(isPrime(n));

	 }


	public static boolean isPrime(int N){
		for (int i = 2; i<=Math.sqrt(N); ++i)
		{
			if(N%i==0)
				return false;
		}
		return true;
	}

}

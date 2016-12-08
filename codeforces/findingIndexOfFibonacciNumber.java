//this gives the index of the fibonacci number preceding to the given number

import java.util.*;
import java.io.*;

public class findingIndexOfFibonacciNumber{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int i;
		int n=in.nextInt();
		//int m=in.nextInt();
		int[] fib=new int[10000000];
		fib[0]=0;
		fib[1]=1;

		for(i=2;;i++){
			fib[i]=fib[i-1]+fib[i-2];
			if(fib[i] > n)
				break;
		}
		System.out.println(i-1);

	}
}
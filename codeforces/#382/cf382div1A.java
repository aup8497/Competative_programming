import java.util.*;
import java.io.*;

public class cf382div1A{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		long i,x,y,z;
		long n=in.nextLong();
		//int m=in.nextInt();
						  //3000000000
		//long[] fib=new long[922337203885477580];
		x=0;
		y=1;
		for(i=2;;i++){
			//fib[i]=fib[i-1]+fib[i-2];
			z=x+y;
			if(z > n)
				break;
			x=y;
			y=z;
		}
		System.out.println(i-3);


	}
}

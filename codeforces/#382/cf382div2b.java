import java.util.*;
import java.io.*;

public class cf382div2b{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int i;
		long sum1=0,sum2=0;
		int n=in.nextInt();
		int n1=in.nextInt();
		int n2=in.nextInt();
		int[] a=new int [n];

		for (i=0;i<n;i++) {
			a[i]=in.nextInt();
		}

		if(n1>n2){
			int temp=n1;
			n1=n2;
			n2=temp;			
		}
//		System.out.println(n1+"  "+n2);

		Arrays.sort(a); 

//		System.out.println(Arrays.toString(a));
		
		for(i=n-1;i>=n-n1;i--){
			sum1+=a[i];
		}
//		System.out.println("sum1="+sum1);

		double avg1=(double)sum1/n1;
		for(i=n-n1-1;i>=n-n1-n2;i--){
			sum2+=a[i];
		}
//		System.out.println("sum2="+sum2);
		double avg2=(double)sum2/n2;

		// System.out.println("avg1="+avg1);
		// System.out.println("avg1="+avg2);

		System.out.println(avg1+avg2);
	}
}
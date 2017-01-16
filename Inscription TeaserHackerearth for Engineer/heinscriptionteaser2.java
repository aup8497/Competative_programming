import java.io.*;
import java.util.*;
import java.lang.*;

class heinscriptionteaser2{

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int t,x;
		t=in.nextInt();

		for (x=0;x<t ;x++) {
				
			int n=in.nextInt();
			int l=in.nextInt();
			int[] a=new int[l];
			int count=0;
			for (int i=0;i<l;i++) {
				a[i]=in.nextInt();
				if(a[i]<=185)
					count++;
			}
			if(count>=n+1)
				System.out.println("YES");
			else
				System.out.println("NO");
		}

	}
}
//THIS IS NOT CORRECT THE CORRECTED SOLUTION IS IN cf382div2final.java

import java.util.*;
import java.io.*;

public final class cf382div2C{

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int flag=0;
		int n=in.nextInt();
		int k=in.nextInt();
		
		String str=in.next();
		char[] arr=str.toCharArray();

		

		for(int i=str.indexOf("G")+k;i<n;){
//			System.out.println(i+"\n");
			if(arr[i]=='#'){
				System.out.println("NO");
				System.exit(0);
			}
			else if(arr[i]=='T'){
				System.out.println("YES");
				System.exit(0);
			}
			i=i+k;
		}
		for(int i=str.indexOf("G")-k;i>=0;){
//			System.out.println(i+"\n");
			if(arr[i]=='#'){
				System.out.println("NO");
				System.exit(0);
			}
			else if(arr[i]=='T'){
				System.out.println("YES");
				System.exit(0);
			}
			i=i-k;
		}
		System.out.println("NO");

			
	}
	
}

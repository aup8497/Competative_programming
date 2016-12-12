import java.util.*;
import java.io.*;

class cfA373{
	public static void main(String[] args) {
		int i,j,k,n,l;

		Scanner in = new Scanner(System.in);
		
		n=in.nextInt();
		int[] a=new int[n];

		for(i=0;i<n;i++){
			a[i]=in.nextInt();
		}

		if(n == 1){
			System.out.println(-1);
		}
		else{
			if(a[n-1]==0){
				System.out.println("UP");				
			}
			else if(a[n-1]==15){
				System.out.println("DOWN");
			}
			else if(a[n-1]>a[n-2])
				System.out.println("UP");
			else
				System.out.println("DOWN");
		}

	}


}
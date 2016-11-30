import java.util.*;
import java.io.*;

public final class cf382div2Afinal{

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int flag=0;
		int n=in.nextInt();
		int k=in.nextInt();
		
		String str=in.next();
		char[] arr=str.toCharArray();

		int y=str.indexOf("G");
		int z=str.indexOf("T");
		int diff=0;
		if(z>y){
			diff=z-y;
		}else{
			diff=y-z;
		}

		if(diff%k!=0){
			System.out.println("NO");
			System.exit(0);
		}
		else{
			if(z>y){
				for(int i=y+k;i<n;){
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
			}else{
				for(int i=y-k;i>=0;){
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
			}
		}


		
		
		//System.out.println("NO");

			
	}
	
}

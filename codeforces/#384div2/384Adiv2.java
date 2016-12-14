import java.util.*;

public class 384Adiv2{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);

		int n=in.nextInt();
		int a=in.nextInt();
		int b=in.nextInt();

		String arr=in.next();
		boolean a1,b1;

		if(arr.charAt(a-1)==1){
			a1=true;
		}else{
			a1=false;
		}
		if(arr.charAt(b-1)==1){
			b1=true;
		}else{
			b1=false;
		}

		if(a<b){
			for( i=b ; (i<n || n-i>=a-1); i++ ){
				if(arr.charAt(i)=='1' )
			}
		}else if(a>b){
			for( i=b-1 ; (i<a-1 || n-i>=0); i++ ){
				if()
			}
		}else{
			System.out.println(0);
		}


	}

}
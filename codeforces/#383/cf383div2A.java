import java.util.*;

public class cf383div2A{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);

		long n=in.nextLong();


		if(n==0){
			System.out.println("1");

		}
		else if((n%4)==1){
			System.out.println("8");
		}else if((n%4)==2){
			System.out.println("4");
			
		}else if((n%4)==3){
			System.out.println("2");
			
		}else {
			System.out.println("6");
			
		}

	}

}
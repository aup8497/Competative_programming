import java.util.*;

class declong16{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);

		int t=in.nextInt();

		while( (t--) != 0){
			int n=in.nextInt();
			int offset=n%8;

			System.out.println(offset);


		}

	}
}
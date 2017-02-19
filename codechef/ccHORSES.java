import java.util.*;

class ccHORSES{
	
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int t;
		t=in.nextInt();

		for (int i=0;i<t ;i++){
			
			int n=in.nextInt();
			long[] a=new long[n];

			for(int j=0;j<n;j++){
				a[j]=in.nextLong();
			}
			Arrays.sort(a);
				long min=1000000000;
			for(int j=0;j<n-1;j++){
				if((a[j+1]-a[j]) < min ){
					min=a[j+1]-a[j];

				}
			}
			System.out.println(min);

		//	System.out.println(Arrays.toString(a));
		}
	}
}

import java.util.*;

class ccCARVANS{
	
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
			int count=1;
			for (int j=0;j<n-1;j++ ) {
				if(a[j+1]==ccCARVANS.min(a[j+1],a[j])){
					count++;
				}else{
					a[j+1]=min(a[j+1],a[j]);
				}
			}				
		System.out.println(count);

		//	System.out.println(Arrays.toString(a));
		}
	}

	public static long min(long a,long b){
		if(a<=b)
			return a;
		else return b;
	}

}

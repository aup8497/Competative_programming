import java.util.*;

class TestClass{
	
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);

		int t=in.nextInt();
		

		for (int x=0;x<t;x++) {
		int n=in.nextInt();
		int[] a=new int[n];
		int time=0,flag=0;
		for (int i=0;i<n ;i++) {
			a[i]=in.nextInt();
			}
		for (int i=1;i<n ;i++) {
			if(a[i]>time){		
				time+=a[i]+1-time;
				flag=0;
			//	System.out.println(time+"  c");
			}
			//	else if(time>a[i]  )
		//		if(flag==0){
		//		time+=1;
		//		flag=1;	
//				System.out.println(time);
		//		}
			//	System.out.println(time+"  nc");
			}
		
			System.out.println(time);
		
	}
}
}
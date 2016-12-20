import java.util.*;

public class cf721B{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int i,j,res=0,resL=0,bestTime,worstTime;
		int n=in.nextInt();
		int k=in.nextInt();
		int[] len=new int[1000];
		//ArrayList<Integer> arr=new ArrayList<Integer>();

		for(i=0;i<n;i++){
			String str=in.next();
			len[str.length()]++;

			//debugging 
//		System.out.println(len[str.length()]);

		}
		String passwd=in.next();
		int passwdLength=passwd.length();

		for(i=1;i<=passwdLength;i++){
			res+=len[i];
			if(i==passwdLength){
				resL=len[i];
			}
		}

//		System.out.println("res = "+res);
//		System.out.println("resL = " + resL);


		//for the best case
		bestTime=((res-resL)/k)*5;
		bestTime+=res-resL+1;

		System.out.print(bestTime+ " ");
		// System.out.println("res = "+res);
		// System.out.println("resL = " + resL);

		worstTime=((res-1)/k)*5;
		worstTime+=res;
		System.out.println(worstTime);

	}
}



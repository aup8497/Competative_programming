import java.util.*;

public class cf386Bfinal{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
//		int k=in.nextInt();
		String st=in.next();
		//StringBuffer str=new StringBuffer();
		char[] arr=new char[n];
		//str=str.append(st);
		//String a="";

		if(n%2==0){
			int mid=(st.length()-1)/2;
			int d=mid,i=mid;
			for(int count=0;count<st.length();count++){
				if(count%2==0){
					arr[d]=st.charAt(count);
					d--;
				}else{
					i++;
					arr[i]=st.charAt(count);
				}
			}

		}else{
			int mid=n/2;
			int d=mid,i=mid;
			for(int count=0;count<st.length();count++){
				if(count%2==0){
					arr[i]=st.charAt(count);
					i++;
				}else{
					d--;
					arr[d]=st.charAt(count);
				}
			}

		}

		String foo=String.valueOf(arr);
		System.out.println(foo);

	}
}
import java.util.*;

public class cf383div2b{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int i,j;
		int n=in.nextInt();
		int x=in.nextInt();
		int[] a=new int[n]; 
		//ArrayList<Integer> arr=new ArrayList<>();

		for(i=0;i<n;i++){
			a[i]=in.nextInt();
		}

		// Arrays.sort(arr.toArray());
		// int s=arr.size();
		 int count=0;
		//System.out.println(Arrays.toString(arr.toArray()));
		// 
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if((a[i]^a[j])==x){
					count++;
				}
			}
		}
		int f=(count/2);
		System.out.println(f);		

	}

}
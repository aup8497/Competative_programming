//NOTE : this solution is incorrect

import java.util.*;

public class cf383div2B{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int i,j;
		int n=in.nextInt();
		int x=in.nextInt();

		ArrayList<Integer> arr=new ArrayList<>();

		for(i=0;i<n;i++){
			int z=in.nextInt();

			if(z<=x){
				arr.add(z);
			}
		}

		Arrays.sort(arr.toArray());
		int s=arr.size();
		int count=0;
		//System.out.println(Arrays.toString(arr.toArray()));
		for(i=0;i<s;i++){
			for (j=s-1; ( arr.get(i)+arr.get(j) >= x ) && (j>=0); j--) {
				if(arr.get(i)+arr.get(j) == x)
					count++;
			}

		}

		System.out.println(count);		

	}

}
import java.util.*;

public class cf745B{
	public static void main(String[] args) {
			Scanner in=new Scanner(System.in);
			boolean[][] b=new boolean[500][500];
			int n=in.nextInt();
			int m=in.nextInt();

			char[][] arr=new char[n][m];
//			ArrayList<String> arr=new ArrayList<>();

			for(int i=0;i<n;i++){
				String str=in.next();
				arr[i]=str.toCharArray();
			}
//				System.out.println(arr.size());
			// for(int i=0;i<n;i++){
			// 	for (int j=0;j<m ;j++ ) {
			// 		System.out.println(arr[i][j]);
			// 	}
			// }
int i,j,flag=0;
int maxi=0,maxj=0;
int mini=100005,minj=100005;
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					if(arr[i][j]=='X'){
						if(i>maxi)
							maxi=i;
						if(i<mini)
							mini=i;
						if(j>maxj)
							maxj=j;
						if(j<minj)
							minj=j;
					}
				}
			}


			for(i=mini;i<=maxi;i++){
				for(j=minj;j<=maxj;j++){
					if(arr[i][j]=='.'){
						System.out.println("NO");
						flag=1;
						break;
					}
				}
				if(flag==1)
					break;
			}
			if(flag==0)
				System.out.println("YES");

	}
}



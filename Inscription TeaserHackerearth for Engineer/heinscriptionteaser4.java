import java.io.*;
import java.util.*;

class heinscriptionteaser4{

	    void path(int G[][],int V)
    {   j=0;
       for (i=j;i<n;i++) {
           
//traverse one side i.e from 1 to n,see if there are edges greater than that value
//do the same for coming back as well
//everytime decrease the count of the matrix element
//stop if it is one
//traverse back by returning if you dont find an element greater than the current element
        
           j++;
       }
    }


	public static void main(String[] args) {
			Scanner in=new Scanner(System.in);

			heinscriptionteaser4 b=new heinscriptionteaser4();

			int t=in.nextInt();
			for (int x=0 ; x<t ; x++) {
				int n=in.nextInt();
				int m=in.nextInt();
				int[] a=new int[200001];
				//default value is 0 so no need to initialize G[][]
				int[][] G=new int[100001][100001];

				for (int i=0 ; i<m ; i++) {
					int y=in.nextInt();
					int z=in.nextInt();

					G[y-1][z-1]++;
					G[z-1][y-1]++;



				}

				//for debugging purpose
				//System.out.println(Arrays.deepToString(G));
				//if(b.isBipartite(G,0,n))
				//	System.out.println("Yes");
				//else
				//	System.out.println("No");
			}
		}	

}


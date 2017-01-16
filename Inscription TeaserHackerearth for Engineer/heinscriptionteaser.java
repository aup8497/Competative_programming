import java.io.*;
import java.util.*;

class heinscriptionteaser{

	    boolean isBipartite(int G[][],int src,int V)
    {
        // Create a color array to store colors assigned to all veritces.
        // Vertex number is used as index in this array. The value '-1'
        // of  colorArr[i] is used to indicate that no color is assigned
        // to vertex 'i'.  The value 1 is used to indicate first color
        // is assigned and value 0 indicates second color is assigned.
        int colorArr[] = new int[V];
        for (int i=0; i<V; ++i)
            colorArr[i] = -1;
 
        // Assign first color to source
        colorArr[src] = 1;
 
        // Create a queue (FIFO) of vertex numbers and enqueue
        // source vertex for BFS traversal
        LinkedList<Integer>q = new LinkedList<Integer>();
        q.add(src);
 
        // Run while there are vertices in queue (Similar to BFS)
        while (q.size() != 0)
        {
 
            // Dequeue a vertex from queue
            int u = q.poll();
 
            // Find all non-colored adjacent vertices
            for (int v=0; v<V; ++v)
            {
                // An edge from u to v exists and destination v is
                // not colored
                if (G[u][v]==1 && colorArr[v]==-1)
                {
                    // Assign alternate color to this adjacent v of u
                    colorArr[v] = 1-colorArr[u];
                    q.add(v);
                }
 
                // An edge from u to v exists and destination v is
                // colored with same color as u
                else if (G[u][v]==1 && colorArr[v]==colorArr[u])
                    return false;
            }
        }
        // If we reach here, then all adjacent vertices can
        //  be colored with alternate color
        return true;
    }


	public static void main(String[] args) {
			Scanner in=new Scanner(System.in);

			heinscriptionteaser b=new heinscriptionteaser();

			int t=in.nextInt();
			for (int x=0 ; x<t ; x++) {
				int n=in.nextInt();
				int m=in.nextInt();
				int[] a=new int[m];
				//default value is 0 so no need to initialize G[][]
				int[][] G=new int[n][n];

				for (int i=0 ; i<m ; i++) {
					int y=in.nextInt();
					int z=in.nextInt();

					G[y-1][z-1]=1;
					G[z-1][y-1]=1;
				}

				//for debugging purpose
				//System.out.println(Arrays.deepToString(G));
				if(b.isBipartite(G,0,n))
					System.out.println("Yes");
				else
					System.out.println("No");
			}
		}	

}


import java.io.*;
import java.util.*;
import java.lang.*;

class TestClass{

		static int N;
		static int[][] A=new int[2001][2001]; 

	public static void main(String[] args) {
	
		Scanner in=new Scanner(System.in);
		TestClass.N=in.nextInt();
		int l=in.nextInt();
		int a=in.nextInt();
		int b=in.nextInt();
		int c=in.nextInt();
		int sum=0;
		TestClass obj=new TestClass();

		obj.func(a,b,c);
  for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
        	System.out.print(TestClass.A[i][j]+"  " );
            //A[i][j] = 0;
            //num = (num*b+c)%M;
        }
        System.out.println("");
    }    

		for (int i=0;i<l;i++) {
			sum=0;
			//char ch=in.nextChar();==>this method doesnot exist
			char ch=in.next().charAt(0);
			if(ch=='F'){
			int x1=in.nextInt();
			int y1=in.nextInt();
			int x2=in.nextInt();
			int y2=in.nextInt();

			for(int j=x1 ;j<=x2;j++ ){
				sum+=TestClass.A[j][y1+(y2-y1)/2 ];
			//	sum+=TestClass.A[x1+(x2-x1)/2][j];
			}
			for(int j=y1 ;j<=y2;j++ ){
			//	sum+=TestClass.A[j][y1+(y2-y1)/2 ];
				sum+=TestClass.A[x1+(x2-x1)/2][j];
			}
			
			sum-=TestClass.A[x1+(x2-x1)/2][y1+(y2-y1)/2];
			System.out.println(sum);

		}else if(ch=='C'){
			int x=in.nextInt();
			int y=in.nextInt();
			int k=in.nextInt();

			TestClass.A[x][y]=k;

		}

		}

	}


	void func(int a, int b, int c)
	{
	    int num = a;
	    int M = 1000000007;

	    for(int i=1; i<=TestClass.N; i++)
	    {
	        for(int j=1; j<=N; j++)
	        {
	            TestClass.A[i][j] = num;
	            num = (num*b+c)%M ;
	        }
	    }
	}

}
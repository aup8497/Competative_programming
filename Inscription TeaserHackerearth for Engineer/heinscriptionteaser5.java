import java.io.*;
import java.util.*;
import java.lang.*;

class TestClass{

	void func(int a, int b, int c)
	{
	    int num = a;
	    int M = 1000000007;

	    for(int i=1; i<=N; i++)
	    {
	        for(int j=1; j<=N; j++)
	        {
	            TestClass.A[i][j] = num;
	            num = (num*b+c)%M;
	        }
	    }
	}

	public static void main(String[] args) {
	
		Scanner in=new Scanner(System.in);
		int N=in.nextInt();
		int l=in.nextInt();
		int[] A=new int[2001][2001]; 
		int a=in.nextInt();
		int b=in.nextInt();
		int c=in.nextInt();
		int sum=0;
		TestClass obj=new TestClass();

		obj.func(a,b,c);


		for (i=0;i<l;i++) {
			char ch=in.nextChar();
			if(ch=='F'){
			int x1=in.nextInt();
			int y1=in.nextInt();
			int x2=in.nextInt();
			int y2=in.nextInt();

			for(int j=0 ;j<N;j++ ){
				sum+=A[j][y1+(y1+y2)/2];
				sum+=A[x1+(x1+x2)/2][j];
			}
			sum-=A[x1+(x1+x2)/2][y1+(y1+y2)/2];
			System.out.println(sum);

		}else if(ch=='C'){
			int x=in.nextInt();
			int y=in.nextInt();
			int k=in.nextInt();

			A[x][y]=k;

		}

		}

	}

}
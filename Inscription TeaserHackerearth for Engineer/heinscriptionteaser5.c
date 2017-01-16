#include<stdio.h>
#include<stdlib.h>

int A[2000][2000];
int N=3;
void func(int a, int b, int c)
{
    int num = a;
    int M = 1000000007;

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            A[i][j] = num;
            num = (num*b+c)%M;
        }
    }
}
int main(int argc, char const *argv[])
{

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            A[i][j] = 0;
            //num = (num*b+c)%M;
        }
    }	

    func(1,2,3);
	for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
        	printf("%d  ",A[i][j] );
            //A[i][j] = 0;
            //num = (num*b+c)%M;
        }
        printf("\n");
    }    

	return 0;
}
#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<limits.h>

#define il(n) scanf("%lld",&n)
#define i(n) scanf("%d",&n)
#define infy INT_MAX
#define mod 1000000007
#define vv vector<int>
#define pp pair<int,int>


#define read() freopen("input.txt","r",stdin)
#define write() freopen("output.txt","w",stdout)


using namespace std;


long long ways[400005],n_ways[400005],req,need,i,j,h,r,b,red,blue;

long long ans=0;

int find_h(int x)
{

    int h=0;

    while((h*h+h)/2<=x)
    h++;

    return h-1;
}


int main()
{


    cin>>r>>b;

    h=find_h(r+b);

    cout << "height of the tower : "<< h << endl;

    req=h;
    need=h;

    //cout<<h<<" ";


    ways[h]=1;ways[0]=1;

    if(h>1)
  {

    for(i=2;i<=h;i++)
    {
   
    cout << "\n\n\nheight of the tower changing  : "<< i << endl;

        req--;
        need+=req;
    cout << "req : "<< req << endl;
    cout << "need : "<< need << endl;

        /// red
        for(red=0;red<=r;red++)
        {

    cout << "\nred  : "<< red << endl;


          j=red-req;
          blue=need-red;

    cout << "j  : "<< j << endl;
    cout << "blue  : "<< blue << endl;


          if((red<=r)&&(blue<=b)&&(red>=0)&&(blue>=0)&&(j>=0))
          n_ways[red]=(n_ways[red]+ways[j])%mod;

          j=red;
          blue=need-red;

    cout << "j  : "<< j << endl;
    cout << "blue  : "<< blue << endl;

          if((red<=r)&&(blue<=b)&&(red>=0)&&(blue>=0))
          n_ways[red]=(n_ways[red]+ways[j])%mod;

        }

        for(j=0;j<=r;j++)
        {
            ways[j]=n_ways[j];
            n_ways[j]=0;
        }

    }



    for(i=0;i<=r;i++)
    ans=(ans+ways[i])%mod;

 }else
 {
    ans=0;
    if(r>=1)
    ans++;
    if(b>=1)
    ans++;
 }

    cout<<ans;

    return 0;
}
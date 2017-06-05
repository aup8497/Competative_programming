#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(int)a;i<=(int)b;++i)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define SZ(x) (int)x.size()
#define ALL(x) x.begin(),x.end()
typedef long long ll;
const int N = 5002;
template<typename T> inline T Abs(T a) { return a < 0 ? -a : a ; }
int a[N],n,first[N],last[N],dp[N];
int main()
{
#ifdef HOME
      freopen("input.txt","r",stdin);
#endif
      scanf("%d",&n);
      rep(i,1,n)
      {
            scanf("%d",a+i);
            if(!first[a[i]]) first[a[i]] = i;
            last[a[i]] = i;
      }
      dp[0] = 0;
      rep(i,1,n)
      {
            dp[i] = dp[i-1];
            int val = 0;
            vector<bool> found(N+1,false);
            int fi = 1e9;
            for(int j=i;j>0;--j)
            {
                  fi= min(fi,first[a[j]]);
                  if(last[a[j]] > i) break;
                  int cur = a[j];
                  if(!found[cur])
                        val ^= cur,found[cur]=1;
                  if(fi >= j && last[a[j]] <= i)
                        dp[i] = max(dp[i], (dp[j-1] + val));
            }
      }
      cout << dp[n] << endl;
}
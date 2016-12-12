coding styles used by famous coders

#include <bits/stdc++.h>
using namespace std;
using LL = long long;
const double pi = acos(-1);
const int p = 1e9 + 7;
int cnt[111][2][22], tmp[2][22], ans[2][22];
int n, k;
vector <int> G[111];
int mul(int a, int b) {
  return 1ll * a * b % p;
}
void add(int & a, int b) {
  a = (a + b) % p;
}

int main() {
  cin >> n >> k;
  for (int i = 1; i < n; i ++) {
    int u, v;
    cin >> u >> v;
    G[u].push_back(v); G[v].push_back(u);
  }
  dfs(1, 1);
  int ans = 0;
  for (int j = 0; j <= k; j ++)
    add(ans, cnt[1][1][j]);
  cout << ans << endl;
  return 0;
}
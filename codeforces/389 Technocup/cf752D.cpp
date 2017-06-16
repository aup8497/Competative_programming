#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define forn(i, x, n) for (int i = int(x); i <= int(n); ++i)
#define for1(i, n, x) for (int i = int(n); i >= int(x); --i)
#define F first
#define S second

typedef long long ll;
typedef long double ld;
typedef pair <ll, ll> PII;

const int N = 2e6 + 10;
const ll INF = 1e18;
const int B = 1e9 + 9;

map <string, int> mp;
int sz;
int ip[N];
vector <int> l[N], r[N];

int g(string &s) {
	if (mp.count(s) == 0) return mp[s] = ++sz;
	return mp[s];
}

int main() {

    int n, k;
    cin >> n >> k;
    forn(i, 1, n) {
    	string s;
    	int cost;
		cin >> s >> cost;
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t) {
			int id = g(s);
			ip[id] = 1;
			l[id].pb(cost);
		}
		if (s < t)
            l[g(s)].pb(cost);
		if (s > t)
			r[g(t)].pb(cost);
	}
	int ans = 0, mid = 0;
    forn(i, 1, sz) {
		sort(l[i].begin(), l[i].end(), greater <int> ());
		sort(r[i].begin(), r[i].end(), greater <int> ());
		if (ip[i] == 1) {
            int x = 0;
            for (; x + 1 < l[i].size() && l[i][x] + l[i][x + 1] > 0; x += 2)
					ans += l[i][x] + l[i][x + 1];
            if (x - 1 < l[i].size() && x - 1 >= 0) mid = max(mid, -l[i][x - 1]);
            if (x < l[i].size()) mid = max(mid, l[i][x]);
		}
		else {
            int x = 0;
			for (; x < min(l[i].size(), r[i].size()) && l[i][x] + r[i][x] > 0; ++x)
				ans += l[i][x] + r[i][x];
		}
	}
	cout << ans + mid << "\n";

	return 0;
}
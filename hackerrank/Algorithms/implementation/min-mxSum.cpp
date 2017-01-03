#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;

    std::vector<long long> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);

    sort(v.begin(),v.end());

    long long minsum=0,maxsum=0;

    minsum=v[0]+v[1]+v[2]+v[3];
    maxsum=v[1]+v[2]+v[3]+v[4];

    cout << minsum << " " << maxsum << endl;

    
    return 0;
}

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
#define ll long long
using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;

    ll    disApple=s-a;
     ll   disOrange=t-b;
     ll countApple=0,countOrange=0;

    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
       if((apple[apple_i] >= disApple) && (apple[apple_i] <= disApple+(t-s)))
        countApple+=1;

    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
        if((orange[orange_i] <= disOrange) && (orange[orange_i] >= disOrange-t+s))
            countOrange+=1;
    }


    cout << countApple << "\n" << countOrange << endl ;


    return 0;
}

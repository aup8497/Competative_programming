// #include <stdio.h>
// #include <iostream>
// #include <string>
// #include <math.h>
// #include <vector>
// #include <algorithm>

// #define pb push_back
// #define mp make_pair
// #define ll long long
// #define MOD 1000000007
// const int MAX=1e5+5;
// using namespace std;

// ll n,m,i,j,k;

// int main(){

// 	std::vector<int> a(5);
// 	a[0]=1;
// 	a[1]=2;
// 	a[2]=3;
// 	a[3]=5;
// 	a[4]=79;
	
// 	cout << (lower_bound (a.begin,a.end(),3)-a.begin());

// return 0;	
// }

#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector
using namespace std;
int main () {
  // int myints[] = {10,20,30,30,20,10,10,20};
  std::vector<int> v;           // 10 20 30 30 20 10 10 20

  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);

  std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30


  // std::vector<int>::iterator low,up;
  // low=std::lower_bound (v.begin(), v.end(), 20); //          ^
  // up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

  std::cout << "lower_bound at position " << (lower_bound (v.begin(), v.end(), 21)- v.begin()) << '\n';
  // std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

  return 0;
}
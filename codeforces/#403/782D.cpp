 #include <stdio.h>
 #include <iostream>
 #include <string>
 #include <math.h>
 #include <vector>
 #include <algorithm>
 
 #define pb push_back
 #define mp make_pair
 #define ll long long
 #define MOD 1000000007
 const int MAX=1e5+5;
 using namespace std;
 
 ll n,m,i,j,k;
 
 int main(){
 
 	cin >> n ;
 	string s1,s2;
 	std::vector<string> v1(n);
 	std::vector<string> v2(n);

 	for (int i = 0; i < n; ++i)
 	{
 		cin >> s1 >> s2 ;
 		v1[i]=s1.substr(0,3);
 		v2[i]=s1.substr(0,2)+s2[0];
 	}

 	// cout << v1[0] << endl << v2[0];
 	

 
 return 0;	
 }
 
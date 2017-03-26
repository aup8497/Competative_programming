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


int main(){
	int i,j,max1,t,k,m,n;
	cin >> k ;
	string s[k][2];


	for(i=0;i<k;i++){
		cin >> s[i][0] >> s[i][1];
	}

	int maxans=0,pos=0;
	for(int index=0;index<k;index++){
		

		cin >> n >> m;
		

		int count[300]={0};
		int present[300]={0};
		char str[n][m];
		int maxchar=MAX;

		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin >> str[i][j] ;

			}
		}
		


		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				count[str[i][j]]++;
			}
		}



		// for(i=0;i<k;i++){
			for(j=0;j<s[index][0].length();j++){
				present[s[index][0][j]]++;
			}
			for(j=0;j<s[index][1].length();j++){
				present[s[index][1][j]]++;	
			}
		
			// cout << "read string with i=" << i << endl;

		// cout << "arr : " ; 
		// for(i=97;i<97+26;i++){
		// 	cout << count[i] ;
		// }

		// cout << "present : " ; 
		// for(i=97;i<97+26;i++){
		// 	cout << present[i] ;
		// }

		maxchar=MAX;

		for(i=0;i<300;i++){
			if(present[i]!=0 ){
				maxchar = min(maxchar,( count[i] / present[i] ) );
			}
		}

		// cout  << "max for index=" << index << " is " << maxchar << endl;
		if(maxchar > maxans){
			maxans=maxchar;
			pos=index;
		}
	}

	cout << s[pos][0] << " " <<s[pos][1] << endl;


return 0;	
}

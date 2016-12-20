#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
const int MAX=1e5+5;
#define ll long long
using namespace std;
#define pb push_back

ll a[MAX],b[MAX];

int main(){
 	
	int a,b,b1,c1,c,i;
	cin >> a >> b >> c;

	if(a<1 || b<2 || c<4 ){
		cout << 0 << endl ;
	}else{

		for(i=a;i>=1;i--){
			b1=(2*i);
			c1=(4*i);
			//cout << "b1=" << b1<< " c1= "<< c1<< endl;
			if( b>=b1 && c>=c1 ){
				//cout << b1 << c1<<endl;
				break;
			}
		}
		cout << i+b1+c1 << endl;

	}

}

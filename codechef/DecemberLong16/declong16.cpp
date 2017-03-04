#include <iostream>

using namespace std;
int main(){
	int t;
	cin >> t;

	while(t--){
		int n,partner;
		cin >> n;
		int offset=n%8;
		switch(offset){
			case 1:partner=n+3;
					cout << partner << "LB" << endl ;
					break;
			case 2:partner=n+3;
					cout << partner << "MB"<< endl ;
					break;
			case 3:partner=n+3;
					cout << partner << "UB"<< endl ;
					break;
			case 4:partner=n-3;
					cout << partner << "LB"<< endl ;
					break;
			case 5:partner=n-3;
					cout << partner <<  "MB"<< endl ;
					break;
			case 6:partner=n-3;
					cout << partner << "UB"<< endl ;
					break;
			case 7:partner=n+1;
					cout << partner << "SU"<< endl ;
					break;
			case 0:partner=n-1;
					cout << partner << "SL"<< endl ;
					break;

		}

	}


return 0;	
}
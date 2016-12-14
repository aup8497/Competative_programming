#include <iostream>

long long n,pro;
char arr[100005];
using namespace std;

int main()
{	
	cin >> n ;

	pro=(n)*(n+1);
	//cin >> arr;
	if(n==1){
		cout << "-1"<<endl;
	}else{
	cout << n<<" ";
	cout << n+1<<" ";
	cout << pro << endl;
	}
	return 0;
}


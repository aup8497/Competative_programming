#include <iostream>

long long a,b,n;
char arr[100005];
using namespace std;

int main()
{	long long i,count=1;
	cin >> n >> a >> b;

	cin >> arr;

	if(arr[a-1] == arr[b-1]){
		cout << 0 << endl;
	}else{

		cout << 1 << endl;
	}

	return 0;
}
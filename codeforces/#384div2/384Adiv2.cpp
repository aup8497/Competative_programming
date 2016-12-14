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

		for(i=1;i<n;i++){
			if( (a-1-i)>=0 && (a-1-i)<n && arr[a-1-i]==arr[b-1]){
				cout << count << endl;
				break;
			}else if(  (a-1+i)>=0 && (a-1+i)<n &&    arr[a-1+i]==arr[b-1]){
				cout << count << endl;
				break;
			}else if(   (b-1-i)>=0 && (b-1-i)<n &&   arr[b-1-i]==arr[a-1]){
				cout << count << endl;
				break;
			}else if(  (b-1+i)>=0 && (b-1+i)<n &&  arr[b-1+i]==arr[a-1]){
				cout << count << endl;
				break;
			}else{
				count++;
			}

		}
	}

	return 0;
}

/*
if(a<b){
			for( i=b ; (i<n || n-i>=a-1); i++ ){
				if( arr[i]==arr[b-1] ){
					cout << count <<  endl;
				}else if(arr[i]==arr[b-1]){
					cout << count << endl;
				}else{
					count++;
				}
			}
		}else{
			for( i=b-1 ; (i<a-1 || n-i>=0); i++ ){
				if()
			}
		}
*/
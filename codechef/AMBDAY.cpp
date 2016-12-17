#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
const int MAX=1e5+5;
#define ll long long
using namespace std;

int main(){
 	ll t;
 	cin >> t;

 	while(t--){
		ll f,h,w,x;
		vector<int> a;
		cin >> f>>h>>w;

		for(int i=0;i<f;i++){
			cin >> x;
			a.push_back(x);
		}

		sort(a.begin(),a.end());

//		for(int j=0;j<f;j++)cout << a[j] << " " ;

		int min=MAX;
		for (int i = 0; i <= f-2; ++i)
		{	
	//		cout << "a[i+1] a[i] " << a[i+1] << a[i] << endl;
			if(min>(a[i+1]-a[i])){
				min=a[i+1]-a[i];
			}
		}

		if(min > a[0])
			min=a[0];
		if(min > w-a[f-1])
			min=w-a[f-1];

		cout << h*min << endl;



 	}

}

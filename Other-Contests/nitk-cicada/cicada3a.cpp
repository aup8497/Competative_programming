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

	int t,type,type1cnt,type2cnt,a,b;
	cin >> t;
	while(t--){
		type1cnt=0;
		type2cnt=0;
		int flag1=0;
		int flag2=0;
		int n;
		int result=100;
		cin >> n;
		for(int i=1;i<=n;i++){
			string a,b;
			cin >> type;
			cin >> a >> b;
			if(type==1){
				type1cnt++;
				if(type1cnt>=3)
					flag1=1;
				if(b=="Yes")
					flag1=1;
			}else{
				type2cnt++;
				if(type2cnt>=12)
					flag2=1;
				if(b=="Yes")
					flag2=1;
			}

			if(flag1==1 && flag2==1)
				result=min(result,i);
		}
		if(result==100)
			cout << "Unsure" << endl;
		else
			cout << result << endl;
	}

return 0;	
}

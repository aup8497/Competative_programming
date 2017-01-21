//this is partial correct check out why.
//because if we get three colours then at that moment of time we come to know that the fourth one is YES,but this code says that in fourth case 
// hence wrong
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

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int flag=0;
		int visited[2]={0,0};
		int result=0,i;
		for(i=1;i<=n;i++){
			int slno;
			string a,b;
			cin >> slno ;
			cin >> a >> b;

			if(b=="Yes")
			visited[slno-1]=1;

			if(visited[0]==1 && visited[1]==1 && flag==0){
				result=i;
				flag=1;
			}
		}	
		if(result==0 && flag==1)
		cout << "Unsure" << endl;
		else
			cout << result << endl;

	}

return 0;	
}

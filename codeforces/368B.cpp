//368B.cpp
#include <iostream>
#include <assert.h>
#include <string.h>
#include <stdio.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX=1e5+7;

int a[MAX],b[MAX],dist[MAX],n,k,m,x,rem=0,distNo[MAX];
bool look[MAX]={false};

void getDistNoForEach(int a[]){
//distNo[] will give the number of occurances of distinct elements from the end to that particular index
	for(ll i=n-1;i>=0;i--){
		if( dist[a[i]] > 0  && look[a[i]]==false){
			++rem;
			look[a[i]]=true;
		}
		distNo[i]=rem;
			//cout << "rem = " <<rem << endl ;
	}

}


int main(){
	cin >> n >> m;
	//dist[] is to classify whether the entered element is distinct or not
	//basically dist will give the number of occurance of the given value
	//if distinct then dist[value]==1

	for(int i=0;i<100000;i++){
		dist[i]=0;
	 }

	for(int i=0;i<n;i++){
		cin >> a[i];
		dist[a[i]]+=1;

	}


	getDistNoForEach(a);

	//cout << "hello ive come out of the function " ; 
	for(int i=0;i<m;i++){
		cin >> x;
		cout << distNo[x-1]<< endl;
	}

return 0;	
}
// sherock_and_valid_string.cpp
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

ll n,m,i,j,k,realcount,flag=0,countSameLet,countlet;
ll let[26]={0};
int main(){
string s;
	cin >> s ;
	n=s.length();
	for(i=0;i<n;i++){
		let[s[i]]++;
	}

	for(i=0;i<26;i++)
		if(let[i+97]!=0)
			realcount+=1;

// ll num=0;
// ll differentCount=0;
// 	for(i=0;i<26;i++){
// 		if(let[i+97]!=0 && flag==0){
// 			countSameLet=let[i+97];
// 			flag=1;
// 		}
// 		if( let[i+97]!=0 &&  flag==1){
// 			if(countlet==let[i+97]){
// 				num++;
// 			}else{
// 				differentCount=let[i+97];
// 			}
// 		}
// 	}

		for(i=0;i<26;i++){
			if( let[i+97] != n/realcount ){
				count++
			}
		}


	cout << realcount << " " << countSameLet << " "<< differentCount << " " << countlet << endl;

	if(num==realcount-1  && (differentCount==1 || differentCount==countlet+1) )
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

return 0;	
}

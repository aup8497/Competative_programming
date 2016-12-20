// this is not correct need to work on this a bit

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <math.h>

const int MAX=1e5+5;
#define ll long long
using namespace std;
#define pb push_back

int main(){
 	
	ll n,k,a,b,i,j;

	cin >> n >> k>> a>>b;

	char arr[MAX];
	ll minimum=min(a,b);
	ll grp=n/(k+1);
	ll ind=0;
	ll flag=0;

//solution
	if( n/(k+1) > minimum){
		cout << "NO" << endl;
	}else{

		for(i=0;i<grp;i++){
			if(a>b){
				if(arr[ind-1]=='G'){
					arr[ind]='B';
					// cout << "1 ";  			// 1
					ind++;
					b--;

					for(j=0;j<k;j+){
						arr[ind]='G';
						ind++;
						a--;
					}
					
				}else{
					for(j=0;j<k;j++){
						arr[ind]='G';
						ind++;
						a--;
					}
					arr[ind]='B';
					// cout << "2 ";  			// 2

					ind++;				
					b--;
				}
			}else{
				if(arr[ind-1]=='B'){

					arr[ind]='G';
					ind++;
					a--;					


					for(j=0;j<k;j++){
						arr[ind]='B';
					// cout << "3 ";  			// 3

						ind++;
						b--;
					}

				}
				else{

					for(j=0;j<k;j++){
						arr[ind]='B';
						ind++;
					// cout << "4 ";  			// 4

						b--;
					}
					arr[ind]='G';
					ind++;
					a--;					
				}


			}

		}

		if(arr[ind-1]=='G'){
			arr[ind++]='B';
			b--;
			while(a--)
				arr[ind++]='G';
			while(b--)
				arr[ind++]='B';
					// cout << "5 ";  			//5

		}else {
			while(a--)
				arr[ind++]='G';
			while(b--)
				arr[ind++]='B';
					// cout << "6 ";  			// 6
		
		}

		printf("%s\n",&arr[0]);

	}

}

//this is the correct solution 
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define N ((ll)301*1000)
#define INF ((ll)2e9)
#define MOD ((ll)1e9+7)
ll tavan(ll x,ll y){ll res=1;while(y){res*=y%2?x:1;res%=MOD;x*=x;x%=MOD;y/=2;}return res;}

ll n,k,a,b;
char A='G',B='B';

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k>>a>>b;
    if(a<b)swap(a,b),swap(A,B);
    ll num=(a+k-1)/k-1;            //
    if(num>b)return cout<<"NO",0;
    b-=num;
    for(int i=0;i<num;i++)
    {
    	for(int j=0;j<k;j++)cout<<A;
    	cout<<B;
    	for(int j=0;j<k-1 && b;j++,b--)cout<<B;
	}
	ll p=a%k;
	if(p==0)p=k;
	for(int j=0;j<p;j++)cout<<A;
	for(int j=0;j<k && b;j++,b--)cout<<B;
    return 0;
}
*/
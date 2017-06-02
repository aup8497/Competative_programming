#include <bits/stdc++.h>

#define ll long long
#define MAX 100005
#define mp make_pair
using namespace std;

int t,n,m,i,j;
int main(){
	cin >> t;

	while(t--){
		int mx=0;
		int a[505][505];
		cin >> n >> m;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin >> a[i][j];
				mx=max(mx,a[i][j]);
			}
		}

		queue< pair<int,int> > q;
		int cnt=0;
		int noOfNonMx=0;
			
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){

				if(a[i][j]==mx){
					cnt++;
					q.push(mp(i,j));
				}else{
					noOfNonMx++;
				}

			}
		}
			
		int res=0;
		
		while(!q.empty()){

			cnt=q.size();
			int flag=0;
			for(i=0;i<cnt;i++){
				pair< int,int > ij=q.front();
				q.pop();

				int i1=ij.first ; 
				int j1=ij.second ;
				
				//i+1,j+1
				if( i1+1<n && j1+1<m && a[i1+1][j1+1]!=mx ){
					a[i1+1][j1+1]=mx;
					q.push(mp(i1+1,j1+1));
					noOfNonMx--;
					flag=1;
				}
				//i+1,j
				if( i1+1<n && a[i1+1][j1]!=mx ){
					a[i1+1][j1]=mx;
					q.push(mp(i1+1,j1));
					noOfNonMx--;
					flag=1;
				}
				//i+1,j-1
				if( i1+1<n && j1-1>=0 && a[i1+1][j1-1]!=mx ){
					a[i1+1][j1-1]=mx;
					q.push(mp(i1+1,j1-1));
					noOfNonMx--;
					flag=1;
				}

				//i-1,j+1
				if( i1-1>=0 && j1+1<m && a[i1-1][j1+1]!=mx ){
					a[i1-1][j1+1]=mx;
					q.push(mp(i1-1,j1+1));
					noOfNonMx--;
					flag=1;
				}
				//i-1,j
				if( i1-1>=0 && a[i1-1][j1]!=mx ){
					a[i1-1][j1]=mx;
					q.push(mp(i1-1,j1));
					noOfNonMx--;
					flag=1;
				}
				//i-1,j-1
				if( i1-1>=0 && j1-1>=0 && a[i1-1][j1-1]!=mx ){
					a[i1-1][j1-1]=mx;
					q.push(mp(i1-1,j1-1));
					noOfNonMx--;
					flag=1;
				}
				//i,j-1
				if( j1-1>=0 && a[i1][j1-1]!=mx ){
					a[i1][j1-1]=mx;
					q.push(mp(i1,j1-1));
					noOfNonMx--;
					flag=1;
				}
				if( j1+1<m && a[i1][j1+1]!=mx ){
					a[i1][j1+1]=mx;
					q.push(mp(i1,j1+1));
					noOfNonMx--;
					flag=1;
				}

			}//end of for


			if(flag==1)
				res++;

		}//end of while		

		cout << res << endl;

	}//end of test case while

}

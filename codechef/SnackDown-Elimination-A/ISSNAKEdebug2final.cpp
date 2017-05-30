#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
// char a[1][600];
string a[2];
std::vector<int> v;

int main(){
	int t;
	cin >> t;

while(t--){
	bool continuity=true,mainFlag=true;
	cin >> n ;
		cin >> a[0];
		cin >> a[1];

	// continuity check
		int flag=0;
	for(i=0;i<n-1;i++){
		if(flag==1)
			if(a[0][i]=='#' || a[1][i]=='#' )
				flag=2;

		if(flag==0){
			if( (a[0][i]=='#' && a[0][i+1]=='.') && (a[1][i]=='#' && a[1][i+1]=='.') )
				flag=1;
			else if( (a[0][i]=='#' && a[0][i+1]=='.') && (a[1][i]=='.' && a[1][i+1]=='#') )
				flag=1;
			else if( (a[1][i]=='#' && a[1][i+1]=='.') && (a[0][i]=='.' && a[0][i+1]=='#') )
				flag=1;			
		}

	}
	if(flag==1){
		if(a[0][n-1]=='#' || a[1][n-1]=='#' )
			flag=2;		
	}
//there is no problem with continuity check
	if(flag==2)
		continuity=false;

	int f1=0,f2=0,noOfNodes=0,flagd31=0,flagd32=0,no=0;
	int noOfNodesWithDegree1=0,noOfNodesWithDegree3=0,noOfNodesWithDegree0=0,degree;
	
	for(i=0;i<n;i++){

		//for a[0]
				degree=0;
		if(a[0][i]=='#'){
			noOfNodes+=1;
			if(a[1][i] == '#')
				degree+=1;
			if( (i-1>=0) && (a[0][i-1] == '#') )
				degree+=1;
			if( (i+1<=n-1) && (a[0][i+1] == '#') )
				degree+=1;

			if(degree==1){
				f1=1;
				noOfNodesWithDegree1+=1;
			}
			if(degree==3 ){
				noOfNodesWithDegree3+=1;
				flagd32=1;
				no+=1;
				if( a[0][i+1]=='.' || a[1][i+1]=='.' ){
					if( (((no/2)%2==0)&&((flagd31==1 && flagd32==1) || (flagd31==2 && flagd32==2)) ) || (((no/2)%2==1)&&((flagd31==1 && flagd32==2) || (flagd31==2 && flagd32==1)) ) ){
						mainFlag=false;
						cout << "main flag made false" << endl;
					}
					cout << "came here for i=" << i << " with flagd31= " << flagd31 << " with flagd32= "  << flagd32 << " no " << no << endl;
					no=0;
				}
			}
			if( degree==3 && flagd31==0){
				flagd31=1;
			}
			if(degree==0)
				noOfNodesWithDegree0+=1;

		}
		// cout << degree << " " ;

		//for a[1]
			degree=0;
		if(a[1][i]=='#'){
				noOfNodes+=1;
			if(a[0][i] == '#')
				degree+=1;
			if( (i-1>=0) && (a[1][i-1] == '#') )
				degree+=1;
			if( (i+1<=n-1) && (a[1][i+1] == '#') )
				degree+=1;

			if(degree==1){
				f2=1;
				noOfNodesWithDegree1+=1;
			}
			if(degree==3){
				noOfNodesWithDegree3+=1;
				flagd32=2;
				no+=1;
				if( a[0][i+1]=='.' || a[1][i+1]=='.' ){
					if( (((no/2)%2==0)&& ((flagd31==1 && flagd32==1) || (flagd31==2 && flagd32==2))) || ( ((no/2)%2==1) && ((flagd31==1 && flagd32==2) || (flagd31==2 && flagd32==1)) ) ){
						mainFlag=false;
						cout << "main flag made false" << endl;
					}
					cout << "came here for i=" << i << " with flagd31= " << flagd31 << " with flagd32= "  << flagd32 << " no " << no << endl;
					no=0;
					// cout << "came here for i=" << i << "\n" ;

				}				
			}
			if( degree==3 && flagd31==0){
					flagd31=2;
			}
			if(degree==0)
				noOfNodesWithDegree0+=1;
		}
		// cout << degree << endl;
		if(i!=0 && no==0){
			if(mainFlag==false)
				continuity=false;
			cout << " came here for i= " << i << "\n" ;
			flagd31=0;
			flagd32=0;
		}

			// cout << " came here for i= " << i << "\n" ;

	}


	cout << "continuity = " << continuity << endl;

	if(!continuity){
		cout << "came to continuity" << endl;
		cout << "no" << endl;
	}
	else if( noOfNodesWithDegree0>=1 ){
		if(noOfNodes==1){
		cout << "degree of 0 >=1" << endl;
			cout << "yes" << endl;
		}
		else{
		cout << "degree of 0 >=1" << endl;
			cout << "no" << endl;
		}
	}else{
		if( noOfNodesWithDegree1 > 2 ){
		cout << "degree of 1 >=2" << endl;
			cout << "no" << endl;
		}
		else{
			// if( noOfNodesWithDegree1 == 2 ){
		cout << "degree of 1 ==2" << endl;
				if( noOfNodesWithDegree3==0 ){
					cout << "yes" << endl;
				}
				else if( (noOfNodesWithDegree3/2)%2==0  ){
		cout << "degree of 3 is " << noOfNodesWithDegree3 << endl;
					if( (flagd31==1 && flagd32==2) || (flagd31==2 && flagd32==1) ){
						cout << "yes" << endl;
					}
					else{
						cout << "no" << endl;
					}
				}else{
		cout << "degree of 3 is " << noOfNodesWithDegree3 << endl;
					// if(f1==1 && f2==1)
					if( (flagd31==1 && flagd32==2) || (flagd31==2 && flagd32==1) ){
						cout << "no" << endl;
					}
					else{
						cout << "yes" << endl;					
					}
				}
			// }else{
			// 	cout << "final " << endl;
			// 	cout << "yes" << endl;
			// }
		}
	}

	// cout << noOfNodesWithDegree0 << noOfNodesWithDegree1 << nooOfNodesWithDegree3 << endl;

}



return 0;	
}
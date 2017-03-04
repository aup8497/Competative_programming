#include <bits/stdc++.h>

using namespace std;

long long int a[10000000]={0},n,freq[10000000]={0},count1;

int gcd(int u, int v){
    return (v != 0) ? gcd(v, u % v) : u;
}

int seeNext(int j){

	int next=j+1;
	//cout << "j="<< j << " next=" << next << endl; 
	// while( next < n ){
	// cout << "inside while  "<<"j="<< j << " next=" << next << endl; 

	while( next < n ){

		if( gcd(a[j],a[next]) > 1 ){
			return freq[next]+1;
		}
		next++;

	}
	return 0;

}

		// if( gcd(a[j],a[next]) > 1 ){
		// 	// if(freq[j]!=-1){
		// 	// 	cout << "calling freq[j]" << j;
		// 	// 	count1=count1+freq[j];
				
		// 	// 	return ;

		// 	// }
		// 	count1++;
  //           cout << "gcd of j= "<< j<< "a[j]=" << a[j] << "  next= "<<  next << " a[next]=" << a[next] <<  " is " <<  gcd(a[j],a[next]) << endl;
      
  //           if(next!=n-1){
		// 	seeNext(next);
		// 	cout << "\ncalling seeNext-" << next << endl;
		// 	}else{
		// 		break;
		// 	}

		// }
		// next++;
	// }
	// return ;


int main(){

long long int t;

cin >> t;

while(t--){

long long int max=0;
int i,j,k;
cin >> n;
for(i=0;i<n;i++)
	cin >> a[i];

	for(i=n-2;i>=0;i--){
		count1=0;
		//cout << "\n\ncount1 = " << count1 << endl;
		freq[i]=seeNext(i);
		//cout << "\ncount1 = " << count1 << endl << "\n\n";
		count1=freq[i];

		//cout << "freq of "<< i << " is " << freq[i] << endl;

		if(count1 > max)
			max=count1;
	}

	cout << max+1 << endl;


}
return 0;
}

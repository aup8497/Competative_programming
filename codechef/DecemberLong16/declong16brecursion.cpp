#include <bits/stdc++.h>

using namespace std;

long long int count1,a[100000]={0},n,freq[100000]={0};

int gcd(int u, int v){
    return (v != 0) ? gcd(v, u % v) : u;
}

void seeNext(int j){

	int next=j+1;
	cout << "j="<< j << " next=" << next << endl; 
	while( next < n ){
	cout << "inside while  "<<"j="<< j << " next=" << next << endl; 

		if( gcd(a[j],a[next]) > 1 ){
			// if(freq[j]!=-1){
			// 	cout << "calling freq[j]" << j;
			// 	count1=count1+freq[j];
				
			// 	return ;

			// }
			count1++;
            cout << "gcd of j= "<< j<< "a[j]=" << a[j] << "  next= "<<  next << " a[next]=" << a[next] <<  " is " <<  gcd(a[j],a[next]) << endl;
      
            if(next!=n-1){
			seeNext(next);
			cout << "\ncalling seeNext-" << next << endl;
			}else{
				break;
			}

		}
		next++;
	}
	return ;
}

int main(){

int i,j,k;
cin >> n;
long long int max=0;

for(i=0;i<n;i++)
	cin >> a[i];


fill_n(freq,n,-1);
freq[n-1]=0;
for(i=0;i<n;i++)
	cout << freq[i];


	for(i=n-2;i>=0;i--){
		count1=0;

		cout << "\n\ncount1 = " << count1 << endl;
		seeNext(i);
		cout << "\ncount1 = " << count1 << endl << "\n\n";
		freq[i]=count1;

		if(count1 > max)
			max=count1;
	}

	cout << max;

return 0;
}

#include <iostream>
#include <math.h>
using namespace std;


int gcd(int u, int v){
    return (v != 0) ? gcd(v, u % v) : u;
}


int main(){
    
    long long int t,i,j,k;
    cin >> t;
    while(t--){
        long long int n,max=0,count;

        cin >> n;
        long long int a[n];

        for(i=0;i<n;i++){
            cin >> a[i];
        }

        for(i=0;i<n-1;i++){
            count=0;
            j=i;

            while( j<n-1 ){

                for(k=j+1;k<n;k++){
                    //cout << k << endl;

                    if(gcd(a[j],a[k])>1){
                       // cout << "gcd of j= "<< a[j] << "  k= " << a[k] <<  " is " <<  gcd(a[j],a[k]) << endl;
                        count++;
                        break;
                    }

                }
                j=k;    

            }

            if( count > max )
                max=count;

        }

        cout << max+1 << endl;

    }
    return 0;
}
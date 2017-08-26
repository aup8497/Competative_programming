#include <iostream>
#include <algorithm>
using namespace std;

long long prefixSum[100005]={0},optimalSum[100005]={0},i,n,final1=0,final2=0;
int a[100005]={0};

int main() {
    
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    prefixSum[0]=a[0];

    for(i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+a[i];
    }
    
    sort(a,a+n);
    optimalSum[0]=a[0];

    for(i=1;i<n;i++){
        optimalSum[i]=optimalSum[i-1]+a[i];
    }
    
    for(i=0;i<n;i++){
        final1+=prefixSum[i];
        final2+=optimalSum[i];
    }

    cout << final1-final2 << endl;

	return 0;
}

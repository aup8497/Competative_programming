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

 int t,flag;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
        int R,i,j,ii,jj;
        int C,count=0;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        
        
        for(i=0;i<R;i++){
        	for(j=0;j<C;j++){
        		flag=0;

        		for(ii=0;ii<r;ii++){
        			for(jj=0;jj<c;jj++){
        				if(G[i+ii][j+jj]!=P[ii][jj]){
        					//cout << count++;
        					flag=1;
        					break;
        				}
        			}
        			if(flag==1)
        				break;
        		}

        		if(flag==0){
        			
        			cout << "YES" << endl;
        			goto label;
        		}

        	}
        }
        cout <<  "NO" << endl;

        label : ;
    
    }
	


return 0;	
}

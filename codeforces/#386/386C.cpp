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
 	
	int s,x1,x2,t1,t2,p,d;
	int igorTime=0;
	int trainTime=0;
	cin >> s >> x1>> x2>> t1>> t2>> p>> d;

	igorTime=(t2*abs(x2-x1));
	int res=0;
	if(x1<x2){
		if(d==1){
			if(p<=x1){
				trainTime=(t1*(x2-p));//checked

			}else if(p>x1 && p<=x2){
				trainTime=(t1*(2*s+x2-p));

			}else{
				trainTime=(t1*(2*s-p+x2));
			}
		}else{

			trainTime=(t1*(p+x2));



		}
	}else{
		if(d==1){

			trainTime=(t1*(2*s-p-x2));//checked

		}else{

			if(p>=x1){
				trainTime=(t1*(p-x2));

			}else if(p<x1 && p>=x2){
				trainTime=(t1*(2*s+p-x2));

			}else{
				trainTime=(t1*(2*s-x2+p));
			}


		}

	}

				if(igorTime<trainTime)
					res=igorTime;
				else
					res=trainTime;
	 	
	 	cout << res << endl;

}

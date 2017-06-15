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

ll n,m,i,j,k;

int main(){
	ll t;
	cin >> t;

	while(t--){
		ll x11,x12,x21,x22,y11,y12,y21,y22;
		cin >> x11 >> y11 >> x12 >> y12 ;
		cin >> x21 >> y21 >> x22 >> y22 ;

		bool line1IsPt=false,line2IsPt=false , line1ParallelToX=false , line2ParallelToX=false ,line1ParallelToY=false , line2ParallelToY=false;

		//if first line is  a point or not 
		// if( x11==x12 && y11==y12 )
		// 	line1IsPt=true;
		// if( x21==x22 && y21==y22 )
		// 	line2IsPt=true;

		if( x11==x12 )
			line1ParallelToY=true;
		if( x21==x22 )
			line2ParallelToY=true;
		if( y11==y12 )
			line1ParallelToX=true;
		if( y21==y22 )
			line2ParallelToX=true;

		// if lines are points or not 
		if( line1ParallelToY && line1ParallelToX )
			line1IsPt=true;
		if( line2ParallelToY && line2ParallelToX )
			line2IsPt=true;



		ll xmax,xmin,ymax,ymin,x1max,x1min,y1max,y1min,x2max,x2min,y2max,y2min;

		//when both the lines are points 
		if( line1IsPt && line2IsPt ){
			
			if((x11 == x21) && (y11 == y21) )
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		
			// cout << "came to 1";
		}
		//when the line 1 is a point
		else if( line1IsPt ){


				ymax=max(y21,y22);
				ymin=min(y21,y22);
				xmax=max(x21,x22);
				xmin=min(x21,x22);

				if( (y11<=ymax && y11 >= ymin) && (x11<=xmax && x11 >= xmin) )
					cout << "yes" << endl;
				else
					cout << "no" << endl;

			// cout << "came to 2";

		}
		//when the line 2 is a point
		else if( line2IsPt ){

				ymax=max(y11,y12);
				ymin=min(y11,y12);
				xmax=max(x11,x12);
				xmin=min(x11,x12);

				if( (y21<=ymax && y21 >= ymin) && (x21<=xmax && x21 >= xmin) )
					cout << "yes" << endl;
				else
					cout << "no" << endl;

			// cout << "came to 3";

		}
		//when both the lines are not points
		else{

			if( (line1ParallelToY && line2ParallelToX) || (line1ParallelToX && line2ParallelToY)  ){
				if( ( x11==x22 && y11==y22 ) || ( x11==x21 && y11==y21 ) || ( x12==x22 && y12==y22 ) || ( x12==x21 && y12==y21 ) )
					cout << "yes" << endl ;
				else
					cout << "no" << endl;
			// cout << "came to 4";
			}else if( line1ParallelToY && line2ParallelToY ){


				y2max=max(y21,y22);
				y2min=min(y21,y22);
				y1max=max(y11,y12);
				y1min=min(y11,y12);


				if( (x11 == x21) && ((y11<=y2max && y11 >= y2min) || (y12<=y2max && y12 >= y2min) || (y21<=y1max && y21 >= y1min) || (y22<=y1max && y22 >= y1min)) )
					cout << "yes" << endl;
				else
					cout << "no" << endl;

			// cout << "came to 5";
			}else{

			// 	xmax=max(x21,x22);
			// 	xmin=min(x21,x22);

			// 	if( (x11<=xmax && x11 >= xmin) || (x12<=xmax && x12 >= xmin) )
			// 		cout << "yes" << endl;
			// 	else
			// 		cout << "no" << endl;
			// // cout << "came to 6";

				x2max=max(x21,x22);
				x2min=min(x21,x22);
				x1max=max(x11,x12);
				x1min=min(x11,x12);

				if( (y11 == y21) && ((x11<=x2max && x11 >= x2min) || (x12<=x2max && x12 >= x2min) || (x21<=x1max && x21 >= x1min) || (x22<=x1max && x22 >= x1min)) )
					cout << "yes" << endl;
				else
					cout << "no" << endl;
			}
		}
	}	


return 0;	
}
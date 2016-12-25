/*
A. Santa Claus and a Place in a Class
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

Santa Claus is the first who came to the Christmas Olympiad, and he is going to be the first to take his place at a desk! In the classroom there are n lanes of m desks each, and there are two working places at each of the desks. The lanes are numbered from 1 to n from the left to the right, the desks in a lane are numbered from 1 to m starting from the blackboard. Note that the lanes go perpendicularly to the blackboard, not along it (see picture).

The organizers numbered all the working places from 1 to 2nm. The places are numbered by lanes (i. e. all the places of the first lane go first, then all the places of the second lane, and so on), in a lane the places are numbered starting from the nearest to the blackboard (i. e. from the first desk in the lane), at each desk, the place on the left is numbered before the place on the right.
The picture illustrates the first and the second samples.

Santa Clause knows that his place has number k. Help him to determine at which lane at which desk he should sit, and whether his place is on the left or on the right!
Input

The only line contains three integers n, m and k (1 ≤ n, m ≤ 10 000, 1 ≤ k ≤ 2nm) — the number of lanes, the number of desks in each lane and the number of Santa Claus' place.
Output

Print two integers: the number of lane r, the number of desk d, and a character s, which stands for the side of the desk Santa Claus. The character s should be "L", if Santa Clause should sit on the left, and "R" if his place is on the right.
Examples
Input

4 3 9

Output

2 2 L

Input

4 3 24

Output

4 3 R

Input

2 4 4

Output

1 2 R

Note

The first and the second samples are shown on the picture. The green place corresponds to Santa Claus' place in the first example, the blue place corresponds to Santa Claus' place in the second example.

In the third sample there are two lanes with four desks in each, and Santa Claus has the fourth place. Thus, his place is in the first lane at the second desk on the right.
*/

#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for(int i=(a);i<(b);i++)
#define MOD 1000000007
#define MP make_pair
#define PB push_back
typedef long long ll;

int N, M, K;

int main () {
	scanf("%d %d %d", &N, &M, &K);
	int R = (K-1) / (2*M) + 1;
	int C = (((K-1) % (2*M))/2) + 1;
	printf("%d %d %c\n", R, C, (K&1) ? 'L' : 'R');
	return 0;
}

/*
My solution

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
const int MAX=1e5+5;
#define ll long long
using namespace std;
#define pb push_back

ll n,m,k;

int main(){
 	
	
	cin >> n >> m >> k;

	int lane;
	if( (k%(2*m)) == 0  ){
		lane=(k/(2*m));
	}else{
		lane=(k/(2*m))+1;
	}

	int rem=k%(2*m);
	int mres=0;

	if(rem==0){
		mres=m;
	}else{
		mres=(rem+1)/2;
	}
	
	int place=rem%2;

	cout << lane << " " << mres << " ";

	if(place==1)
		cout << "L" ;
	else
		cout << "R" ; 

}

*/
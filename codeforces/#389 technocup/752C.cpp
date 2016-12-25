/*
			C. Santa Claus and Robot


				time limit per test
				2 seconds
				memory limit per test
				256 megabytes
				input
				standard input
				output
				standard output


Santa Claus has Robot which lives on the infinite grid and can move along its lines. He can also, having a sequence of m points p1, p2, ..., pm with integer coordinates, do the following: denote its initial location by p0. First, the robot will move from p0 to p1 along one of the shortest paths between them (please notice that since the robot moves only along the grid lines, there can be several shortest paths). Then, after it reaches p1, it'll move to p2, again, choosing one of the shortest ways, then to p3, and so on, until he has visited all points in the given order. Some of the points in the sequence may coincide, in that case Robot will visit that point several times according to the sequence order.
While Santa was away, someone gave a sequence of points to Robot. This sequence is now lost, but Robot saved the protocol of its unit movements. Please, find the minimum possible length of the sequence.

Input:
The first line of input contains the only positive integer n (1 ≤ n ≤ 2·105) which equals the number of unit segments the robot traveled. The second line contains the movements protocol, which consists of n letters, each being equal either L, or R, or U, or D. k-th letter stands for the direction which Robot traveled the k-th unit segment in: L means that it moved to the left, R — to the right, U — to the top and D — to the bottom. Have a look at the illustrations for better explanation.

Output:
The only line of input should contain the minimum possible length of the sequence.


Examples
Input

4
RURD

Output

2

Input

6
RRULDD

Output

2

Input

26
RRRULURURUULULLLDLDDRDRDLD

Output

7

Input

3
RLL

Output

2

Input

4
LRLR

Output

4
*/

#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for(int i=(a);i<(b);i++)
#define MOD 1000000007
#define MP make_pair
#define PB push_back
typedef long long ll;

int N, t[300], f[200200], ans;
int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};
char s[200200];
bool h[4];

int main () {
	scanf("%d %s", &N, s);
	t['U'] = 0, t['D'] = 1, t['R'] = 2, t['L'] = 3;
	fo(i, 0, N) f[i] = t[(int) s[i]];

	fo(i, 0, N) {
		if (h[f[i] ^ 1]) {
			ans++;
			fo(j, 0, 4) h[j] = 0;
		}
		h[f[i]] = 1;
	}
	
	printf("%d\n", ans+1);

	return 0;
}

/*
My solution

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
const int MAX=1e5+5;
#define ll long long
using namespace std;
#define pb push_back

ll countl=0,countu=0,maincount=0;
char a[MAX];
char l[MAX];
char u[MAX];
ll disprev=0,dis=0;
int main(){
 	
	int n;
	cin >> n ;
	scanf("%s",a);

	for(ll i=0;i<n;i++){
		if(a[i]=='R')
			countl+=1;
		else if(a[i]=='L')
			countl-=1;
		else if(a[i]=='U')
			countu-=1;
		else if(a[i]=='D')
			countu+=1;

		disprev=dis;

		dis=abs(countu)+abs(countl);

		cout << "\ncu " << countu << " cl "<<countl ;
		cout << " dis  " << dis <<" disprev " << disprev;


		if(disprev>dis){
			maincount++;
			dis=1;
			disprev=0;

		if(a[i]=='R')
			countl+=1;
		else if(a[i]=='L')
			countl-=1;
		else if(a[i]=='U')
			countu-=1;
		else if(a[i]=='D')
			countu+=1;

			cout << "  i=" << i;
		}

		if(countl!=0)
			countu=0;
		else
			countl=0;

	}

	cout << maincount+1 << endl ;

	 	

}
*/
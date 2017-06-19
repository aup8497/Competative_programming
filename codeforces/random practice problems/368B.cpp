//368B.cpp

/*
B. Sereja and Suffixes
time limit per test
1 second
memory limit per test
256 megabytes
input
standard input
output
standard output

Sereja has an array a, consisting of n integers a1, a2, ..., an. The boy cannot sit and do nothing, he decided to study an array. Sereja took a piece of paper and wrote out m integers l1, l2, ..., lm (1 ≤ li ≤ n). For each number li he wants to know how many distinct numbers are staying on the positions li, li + 1, ..., n. Formally, he want to find the number of distinct numbers among ali, ali + 1, ..., an.?

Sereja wrote out the necessary array elements but the array was so large and the boy was so pressed for time. Help him, find the answer for the described question for each li.
Input

The first line contains two integers n and m (1 ≤ n, m ≤ 105). The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 105) — the array elements.

Next m lines contain integers l1, l2, ..., lm. The i-th line contains integer li (1 ≤ li ≤ n).
Output

Print m lines — on the i-th line print the answer to the number li.
Examples
Input

10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10

Output

6
6
6
6
6
5
4
3
2
1
*/

#include <iostream>
#include <assert.h>
#include <string.h>
#include <stdio.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX=1e5+7;

int a[MAX],b[MAX],dist[MAX],n,k,m,x,rem=0,distNo[MAX];
bool look[MAX]={false};

void getDistNoForEach(int a[]){
//distNo[] will give the number of occurances of distinct elements from the end to that particular index
	for(ll i=n-1;i>=0;i--){
		if( dist[a[i]] > 0  && look[a[i]]==false){
			++rem;
			look[a[i]]=true;
		}
		distNo[i]=rem;
			//cout << "rem = " <<rem << endl ;
	}

}


int main(){
	cin >> n >> m;
	//dist[] is to classify whether the entered element is distinct or not
	//basically dist will give the number of occurance of the given value
	//if distinct then dist[value]==1

	for(int i=0;i<100000;i++){
		dist[i]=0;
	 }

	for(int i=0;i<n;i++){
		cin >> a[i];
		dist[a[i]]+=1;

	}


	getDistNoForEach(a);

	//cout << "hello ive come out of the function " ; 
	for(int i=0;i<m;i++){
		cin >> x;
		cout << distNo[x-1]<< endl;
	}

return 0;	
}
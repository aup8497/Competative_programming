/*
A sequence of numbers is called a zig-zag sequence if the differences between successive numbers strictly alternate between positive 
and negative. The first difference (if one exists) may be either positive or negative. A sequence with fewer than two elements is 
trivially a zig-zag sequence.
For example, 1,7,4,9,2,5 is a zig-zag sequence because the differences (6,-3,5,-7,3) are alternately positive and negative. In 
contrast, 1,4,7,2,5 and 1,7,4,5,5 are not zig-zag sequences, the first because its first two differences are positive and the 
second because its last difference is zero.
Given a sequence of integers, sequence, return the length of the longest subsequence of sequence that is a zig-zag sequence. A 
subsequence is obtained by deleting some number of elements (possibly zero) from the original sequence, leaving the remaining 
elements in their original order. 

Constraints
-	sequence contains between 1 and 50 elements, inclusive.
-	Each element of sequence is between 1 and 1000, inclusive.
 
*/

//this is wrong soln because it gives 4 for the test case { 1, 17, 5, 10, 13, 15, 10, 5, 16, 8 }
//instead     	
//{ 1, 17, 5, 10, 13, 15, 10, 5, 16, 8 }
//Returns: 7
//There are several subsequences that achieve this length. One is 1,17,10,13,10,16,8.
//but according to the below code i am checking for only consecutive zigzag

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countA[100]={0},a[100];
bool boolA[100];

int zigzagCount(int i){
	if(a[i]>a[i+1] &&  boolA[i+1]==false){
		boolA[i]=1;
		return countA[i+1]+1;
	}else if(a[i]<a[i+1] &&  boolA[i+1]==true){
		return countA[i+1]+1;
	}else{
		return 1;
	}
}


int main(){
	int n,i,max=1;
	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> a[i];

//setting the count and bool for a[n-1]
countA[n-1]=1;	
	if(a[n-1]>a[n-2]){
		boolA[n-1]=true;
	}else{
		boolA[n-1]=false;
	}

	for(i=n-2;i>=0;i--){
		countA[i]=zigzagCount(i);
		if(countA[i]>max){
			max=countA[i];
		}
		//cout << boolA[i] << endl;
	}
		cout << max << endl;

	// for(i=0;i<n;i++)
	// 	cout << countA[i] << " " ;
	// cout << endl ;
return 0;	
}
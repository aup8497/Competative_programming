 /*
Kirito faced a dangerous labyrinth, and now he requires your help.

He's in a tunnel which contains N different rooms. Each room contains Ai monsters inside it. He starts from room 1.
 Every time he stays near a room X, he may go in and clear it from monsters, or just leave the room locked and move
  to the room X+1. However, if he clears a room with K monsters, and the next room he clears consists of L monsters, 
  then the greatest common divisor of K and L must be greater than 1, otherwise he will die (awful curse). Formally, 
  let us say that the order of rooms he visited is i1, i2, , ..., it. Then gcd(Aij, Aij + 1) > 1 for all j < t. Help 
  him cross all the rooms by clearing the maximum number of rooms.
Input

The first line of input contains an integer T denoting the number of test cases.

The first line of each test case contains one integer N denoting the number elements in sequence.

The second line of each test case contains N integers where i-th integer is number of monsters in room Ai.
Output

For each test case, output the maximum number of rooms he could clear. (Kirito should survive.)
Constraints

    1 ≤ T ≤ 10
    1 ≤ N ≤ 105
    1 ≤ ai ≤ 107

Subtasks

    Subtask 1: 1 ≤ N ≤ 103 - 30 points
    Subtask 2: Original constraints - 70 points

Example

Input:
2
7
13 2 8 6 3 1 9
6
1 2 2 3 3 1
Output:
5
2

Explanation

Example 1. Kirito can clear the monsters in the rooms 2, 3, 4, 5, 7 in that order. These rooms consist of 2, 8, 6, 3, and 9 monsters, respectively. You can check that gcd(2, 8), gcd(8, 6), gcd(6, 3) and gcd(3, 9), all are greater than 1.

Example 2. Kirito can clear the monsters in the rooms numbered 2, 3. Each of these two rooms contains two monsters. And we know that gcd(2, 2) = 2 > 1.

There is one more possible solution: Kirito can clear the monsters in the rooms numbered 4, 5. These rooms contains 3 monsters each, and he can clear these rooms as gcd(3, 3) = 3 > 1.
 */

    #include <iostream>
    #include <algorithm>
    #include <cstdio>
    #include <cmath>
    #include <cstring>
    #include <unordered_map>
    using namespace std;
     
    int a[100009],p[100009],b[100009],ind;
     
    void sieve()
    {
    	int i,j,k;
    	memset(b,1,sizeof(b));	
    	b[0]=b[1]=0;
    	for(i=2;i<=100000;i++)
    	{
    		if(b[i])
    		{
    			for(j=2*i;j<=100000;j+=i)
    				b[j]=0;
    		}
    	}
    	ind=0;
    	for(i=2;i<=100000;i++)
    	{
    		if(b[i])
    			p[ind++]=i;
    	}
    }
     
    int main() {
    	int t,i,j,n,t1,t2,ans,temp;
    	sieve();
    	unordered_map<int,int> m;
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%d",&n);
    		for(i=0;i<n;i++)
    			scanf("%d",&a[i]);
    		m.clear();
    		ans=1;
    		for(i=0;i<n;i++)
    		{
    			t1=a[i];
    			temp=0;
    			for(j=0;p[j]*p[j]<=t1;j++)
    			{
    				if(t1%p[j]==0)
    				{
    					m[p[j]]++;
    					temp=max(m[p[j]],temp);
    					while(t1%p[j]==0)
    					{
    						t1/=p[j];
    					}
    				}
    			}
    			if(t1!=1)
    			{
    				m[t1]++;
    				temp=max(m[t1],temp);
    			}
    			t1=a[i];
    			for(j=0;p[j]*p[j]<=t1;j++)
    			{
    				if(t1%p[j]==0)
    				{
    					m[p[j]]=temp;
    					while(t1%p[j]==0)
    					{
    						t1/=p[j];
    					}
    				}
    			}
    			if(t1!=1)
    			{
    				m[t1]=temp;
    			}
    			ans=max(ans,temp);
    		}
    		printf("%d\n",ans);
    	}
    	return 0;
    } 
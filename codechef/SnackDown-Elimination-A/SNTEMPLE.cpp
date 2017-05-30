#include <bits/stdc++.h>
using namespace std;

#define MX 1000007

long long arr[MX];
long long lef[MX], righ[MX];

int main(int argc, char const *argv[])
{
	long long n,t,sm;
	cin >> t;
	while(t--)
	{
		long long current = 0;
		sm = 0;
		cin >> n;
		
		memset(arr, 0, sizeof arr);
		memset(lef, 0, sizeof lef);
		memset(righ, 0, sizeof righ);

		for(long long i = 0; i < n; ++i)
			cin >> arr[i];
		for(long long i = 0; i < n; ++i)
			sm += arr[i];

		for(int i = 0; i < n; ++i)
		{
			if(arr[i] > current)
				++current;
			else
				current = arr[i];

			lef[i] = current;
		}
		current = 0;
		for(int i = n-1; i >= 0; --i)
		{
			if(arr[i] > current)
				++current;
			else
				current = arr[i];

			righ[i] = current;
		}

		current = 0;
		for(int i =0; i < n; ++i)
			current = max(current, min(lef[i], righ[i]));
		
		cout << sm - current*current << endl;
		
	}
	return 0;
}

/*
3
3
1 2 1
4
1 1 2 1
5
1 2 6 2 1

*/
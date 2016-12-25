/*
		B. Santa Claus and Keyboard Check


time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output



Santa Claus decided to disassemble his keyboard to clean it. After he returned all the keys back, he suddenly realized that some pairs of keys took each other's place! That is, Santa suspects that each key is either on its place, or on the place of another key, which is located exactly where the first key should be.

In order to make sure that he's right and restore the correct order of keys, Santa typed his favorite patter looking only to his keyboard.

You are given the Santa's favorite patter and the string he actually typed. Determine which pairs of keys could be mixed. Each key must occur in pairs at most once.
Input

The input consists of only two strings s and t denoting the favorite Santa's patter and the resulting string. s and t are not empty and have the same length, which is at most 1000. Both strings consist only of lowercase English letters.
Output

If Santa is wrong, and there is no way to divide some of keys into pairs and swap keys in each pair so that the keyboard will be fixed, print «-1» (without quotes).

Otherwise, the first line of output should contain the only integer k (k ≥ 0) — the number of pairs of keys that should be swapped. The following k lines should contain two space-separated letters each, denoting the keys which should be swapped. All printed letters must be distinct.

If there are several possible answers, print any of them. You are free to choose the order of the pairs and the order of keys in a pair.

Each letter must occur at most once. Santa considers the keyboard to be fixed if he can print his favorite patter without mistakes.
Examples
Input

helloworld
ehoolwlroz

Output

3
h e
l o
d z

Input

hastalavistababy
hastalavistababy

Output

0

Input

merrychristmas
christmasmerry

Output

-1

*/

#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for(int i=(a);i<(b);i++)
#define MOD 1000000007
#define MP make_pair
#define PB push_back
typedef long long ll;

string s, t;
int m[300], N;
vector<pair<char, char>> v;

int main () {
	cin >> s >> t;
	N = (int) s.size();
	fo(i, 0, N) {
		if (m[s[i]] && m[s[i]] != t[i]) return puts("-1"), 0;
		if (m[t[i]] && m[t[i]] != s[i]) return puts("-1"), 0;
		if (!m[s[i]]) {
			assert(!m[t[i]]);
			m[t[i]] = s[i], m[s[i]] = t[i];
			if (s[i] != t[i]) v.PB(MP(s[i], t[i]));
		}
	}
	printf("%d\n", (int) v.size());
	for (auto i : v) printf("%c %c\n", i.first, i.second);
	return 0;
}

// O(nlogn) preprocessing & O(1) query time
 
#include <algorithm>
#include <iostream>
#include <cmath>
#include <stdio.h>
#define MAXN 100005
 
using namespace std;
 
int values[MAXN];
int max0[20][MAXN];
int min0[20][MAXN];
int index[MAXN];
int n, q;
 
// Preprocessing
// Array values[] indexed from 1 to n
void init()
{
  index[0] = -1;
  int i, j;
 
  for(i = 1; i <= n; i++)
  {
    index[i] = (i & (i - 1)) ? index[i - 1] : index[i - 1] + 1;
    min0[0][i] = max0[0][i] = values[i];
  }
 
  for(i = 1; i <= index[n]; i++)
  {
    int lim = n + 1 - (1 << i);
    for(j = 1; j <= lim; j++)
    {
      min0[i][j] = min(min0[i - 1][j], min0[i - 1][j + (1 << i >> 1)]);
      max0[i][j] = max(max0[i - 1][j], max0[i - 1][j + (1 << i >> 1)]);
    }
  }
}
 
int getMax(int l, int r)
{
  if(l > r) return 0;
  int t = index[r - l + 1];
  r -= (1 << t) - 1;
  return max(max0[t][l], max0[t][r]);
}
 
int getMin(int l, int r)
{
  if(l > r) return 0;
  int t = index[r - l + 1];
  r -= (1 << t) - 1;
  return min(min0[t][l], min0[t][r]);
}
 
int main()
{
  int left, right, minInRange;
  double value1, value2, value3, ans;
 
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
   scanf("%d", &values[i]);
  init();
 
  scanf("%d", &q);
  while(q--)
  {
    scanf("%d%d", &left, &right);
    left++; right++;
    value1 = value2 = value3 = 0;
    minInRange = getMin(left, right);
 
    // Region - 1
    if(left - 1 >= 1)
     value1 = minInRange + getMax(1, left - 1);
 
    // Region - 2
    value2 = (minInRange + getMax(left, right)) / 2.0;
 
    // Region - 3
    if(right + 1 <= n)
     value3 = minInRange + getMax(right + 1, n);
 
    ans = max(value1, max(value2, value3));
    printf("%.1lf\n", ans);
  }
 
  return 0;
} 
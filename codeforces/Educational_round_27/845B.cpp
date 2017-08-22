#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin >> s;
	std::vector<int> v1,v2;
	int sum1=0,sum2=0,i;

	for(int i=0;i<6;i++){
		if(i<=2){
			v1.push_back(s[i]-48);
			sum1+=s[i]-48;
		}else{
			v2.push_back(s[i]-48);
			sum2+=s[i]-48;
		}
	}

	int cnt1=0,cnt2=0,diff;

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	if(sum1==sum2)
		cout << 0 << endl;
	else if(sum1>sum2){

		// cout << sum1 << " " << sum2;

		diff=sum1-sum2;
		i=2;
		while(diff>0){
			diff-=v1[i];
			i--;
			cnt2++;
		}
		diff=sum1-sum2;
		i=0;
		while(diff>0){
			diff-=(9-v2[i]);
			i++;
			cnt1++;
		}

		cout << min(cnt1,cnt2);
	}else{
		// cout << sum1 << " " << sum2;

		diff=sum2-sum1;
		i=2;
		while(diff>0){
			diff-=v2[i];
			i--;
			cnt1++;
		}
		diff=sum2-sum1;
		i=0;
		while(diff>0){
			diff-=(9-v1[i]);
			i++;
			cnt2++;
		}

		cout << min(cnt1,cnt2);

	}

return 0;	
}
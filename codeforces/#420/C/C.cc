// Create your own template by modifying this file!
#include <bits/stdc++.h>
using namespace std;

// #ifdef DEBUG
//      #define debug(args...)            {dbg,args; cerr<<endl;}
// #else
//     #define debug(args...)              // Just strip off all debug tokens
// #endif

// struct debugger
// {
//     template<typename T> debugger& operator , (const T& v)
//     {    
//         cerr<<v<<" ";    
//         return *this;    
//     }
// } dbg;

#define ll long long
#define MAX 100007

ll n,m,i,j,k,x,res=0,sum=0,ptr=0,pos=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	cin >> n ;
	std::set<ll> q;

	for(i=0;i<2*n;i++){

		string s;
		cin >> s;
		if(s=="add"){
			cin >> k;

			pos++;
			if( !q.empty() && k>(*(q.begin())) ){
				ptr=pos;
			}

			q.insert(k);

		}else{
			if(ptr!=-1 && ptr==pos){
				res++;
				ptr=-1;
			}
			pos--;
			q.erase(q.begin());
		}
		
	}

	cout << res << endl;

return 0;	
}


/*


int main(){
	int n;
	scanf("%d",&n);
	
	n=2*n;
	
	int i,ptr=0,last=0,lastele,ans=0,cnt=0,lastcnt=0,cur=0,lastorder=6e7,ok=1;
	vector<int>st;
	
	for (i=1;i<=n;i++){
		string s;
		cin>>s;

		if(s=="add"){
			
			int p;
			scanf("%d",&p);
			
			st.push_back(p);
			
		}
		else{
			ptr++;
			int sz=st.size();
			
			sz--;
			
			if(st.size()==0){
				continue;
			}
			
			if(st[sz]!=ptr){
				ans++;
				st.clear();
			}else{
				st.pop_back();
			}	
		}
		
	}	

	cout<<ans;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int previ[300005], prev1;
bool there[300005];
set<int> pr;

int main()
{
    int n, x, req = 1, r = 0, onTop, ordered = 1;
    string s;
    scanf("%d", &n);
    for(int i = 1; i <= n + n; i++)
    {
        cin>>s;
        if(s == "remove")
        {
            if(req == onTop)
            {
                pr.erase(req);
                if(ordered == 1)
                {
                    set<int>::iterator it = pr.lower_bound(req);
                    if(it != pr.end())
                        onTop = (*it);
                }
                else
                {
                    int temp = req;
                    while(previ[temp] != 0 && there[previ[temp]] == 0)
                        temp = previ[temp];
                    previ[req] = previ[temp];
                    onTop = previ[req];
                }
                there[req] = 0;
                req++;
            }
            else
            {
                ordered = 1;
                pr.erase(req);
                there[req] = 0;
                set<int>::iterator it = pr.lower_bound(req);
                    if(it != pr.end())
                        onTop = (*it);
                r++;
                req++;
            }
        }
        else
        {
            scanf(" %d", &x);
            there[x] = 1;
            pr.insert(x);
            previ[x] = prev1;
            if(x != req)
                ordered = 0;
            onTop = x;
            prev1 = x;
        }
    }
    printf("%d\n", r);
    return 0;
}
*/
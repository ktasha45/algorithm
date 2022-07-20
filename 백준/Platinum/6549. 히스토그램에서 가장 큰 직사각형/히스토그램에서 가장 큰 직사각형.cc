#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; 
	while(1) {
		stack<ll> s;
		ll ans=-1;
		cin>>n; if(!n) break;
		vector<ll> h(n, 0);  
		for(ll&i:h)cin>>i; h.insert(h.begin(), -1); h.push_back(-1);
		s.push(0);
		for(int i=1; i<=n+1; i++) {
			while(!s.empty() && h[s.top()] > h[i]) {
				int tmp = s.top();
				s.pop();
				ll curs = (i-s.top()-1) * h[tmp];
				if(curs > ans) ans = curs;
			}
			s.push(i);
		}
		cout<<ans<<'\n';
	}
	return 0;
}
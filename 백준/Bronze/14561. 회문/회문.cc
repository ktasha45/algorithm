#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(ll a, ll n) {
	int ans = 1;
	
	vector<int> v;
	while (a != 0) {
		v.push_back(a%n);
		a/=n;
	}
	for(int i=0; i<v.size()/2; i++) {
		if(v[i] != v[v.size()-i-1]) {
			ans=0;
			break;
		}
	}
	
	return ans;
}

int main() {
	ll t, a, n;
	cin >> t;
	while(t--) {
		cin >> a >> n;
		cout << solve(a, n) << '\n';
	}
	return 0;
}
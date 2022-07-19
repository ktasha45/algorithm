#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;cin>>n>>m;
	int ans;
	vector<int> v(n, 0);
	for(int&i:v)cin>>i;
	ll b=0, e=2000000000;
	while(e>=b) {
		ll loc=0;
		ll mid=(e+b)/2;
		for(int&num:v) {
			if(num<=mid) continue;
			loc+=num-mid;
			if(loc>=m) break;
		}
		if(loc>=m) {
			b = mid+1;
			ans = mid;
//			cout<<loc<<' '<<mid<<'\n';
		}
		else e = mid-1;
	}
	cout<<ans;
	return 0;
}
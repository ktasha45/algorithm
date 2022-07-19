#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int k, n;cin>>k>>n;
	int ans;
	vector<int> v(k, 0);
	for(int&i:v)cin>>i;
	ll b=1, e=1<<30;
	e*=2; e--;
	while(e>=b) {
		int loc=0;
		ll mid = (e+b)/2;
		for(int&num:v)
			loc+=num/mid;
		if(loc >= n) {
			b = mid+1;
			ans = mid;
//			cout<<loc<<' '<<mid<<'\n';
		}
		else e = mid-1;
	}
	cout<<ans;
	return 0;
}
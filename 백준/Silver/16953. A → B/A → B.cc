#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int di[4] = {-1 ,1, 0, 0};
int dj[4] = {0, 0, -1, 1};
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll a,b;cin>>a>>b;
	int ans=1<<30;
	queue<pair<ll, int>> q;
	q.push(make_pair(a, 0));
	while(!q.empty()) {
//		queue<pair<ll, int>> qq(q);
//		while(!qq.empty()) {
//			auto &i = qq.front();
//			qq.pop();
//			cout<<i.first<<' '<<i.second<<'\n';
//		}
		ll cur = q.front().first;
		int curDepth = q.front().second;
		q.pop();
		if(cur == b) ans=min(ans, curDepth);
		else if(cur > b) continue;
		else {
			q.push(make_pair(10*cur+1, curDepth+1));
			q.push(make_pair(cur*2, curDepth+1));
		}
	}
	if(ans == 1<<30) cout<<-1;
	else cout<<ans+1;
	return 0;
}
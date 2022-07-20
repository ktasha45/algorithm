#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int di[4] = {-1 ,1, 0, 0};
int dj[4] = {0, 0, -1, 1};

int n,m;
vector<int> v;
vector<int> ans;
vector<bool> vis;
void bt(int depth) {
	if(depth >= m) {
		for(int&i:ans) cout<<v[i]<<' ';
		cout<<'\n';
		return;	
	}
	for(int i=1; i<=n; i++) {
		if(vis[i]) continue;
		if(!vis[i-1] && v[i-1] == v[i]) continue;
		vis[i]=true;
		ans[depth] = i;
		bt(depth+1);
		vis[i]=false;
	}
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n>>m;
	v.resize(n, 0);
	vis.resize(n+1, 0);
	ans.resize(m, 0);
	for(int&i:v)cin>>i;
	v.insert(v.begin(), -1);
	sort(v.begin(), v.end());
	bt(0);
	return 0;
}
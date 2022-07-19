#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int ans[100009];
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;cin>>n;
	vector<vector<int>> adj(n+1, vector<int>());
	for(int i=0;i<n-1;i++){
		int from, to;cin>>from>>to;
		adj[from].push_back(to);
		adj[to].push_back(from);
	}
	queue<int> q; q.push(1);
	vector<bool> visit(n+1, false);
	while(!q.empty()) {
		int cur = q.front();
		q.pop();
		visit[cur]=true;
		
		for(int&i:adj[cur]) {
			if(!visit[i]) {
				ans[i]=cur;
				q.push(i);
			}
		}
	}
	for(int i=2; i<=n; i++) cout<<ans[i]<<'\n';
	return 0;
}
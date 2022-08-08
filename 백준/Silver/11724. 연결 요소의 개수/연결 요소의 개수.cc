#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    int n,m;cin>>n>>m;
    vector<vector<int>> adj(1001, vector<int>());
    int s, e;
    while(m--){
    	cin>>s>>e;
    	adj[s].push_back(e);
    	adj[e].push_back(s); // 무방향 
	}
	bool visit[1001];
	memset(visit, false, 1001);
	int ans=0;
	queue<int> q;
	for(int i=1;i<=n;i++) {
		if(visit[i]) continue;
		ans++;
		q.push(i);
		while(!q.empty()){
			int cur = q.front();
			q.pop();
			
			if(visit[cur]) continue;
			visit[cur] = true;
			for(int&next:adj[cur]) {
				q.push(next);
			}
		}
	}
	cout<<ans;
	
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

vector<int> adj[300001];
bool visited[300001];
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    memset(visited, false, 300001);
    int n;cin>>n;
    int s,e;
	for(int i=0;i<n-2;i++){
    	cin>>s>>e;
    	adj[s].push_back(e);
    	adj[e].push_back(s);
	}
	queue<int> q;
	int cur = -1;
	int c = 0;
	int ans[2] = {1, 2};
	for(int i=1;i<=n;i++) {
		if(visited[i]) continue;
		ans[c++] = i;
		if(c >= 2)
			break;
		q.push(i);
		while(!q.empty()){
			cur = q.front();
			q.pop();
			if(visited[cur]) continue;
			visited[cur] = true;
			for(int&next:adj[cur]) {
				if(visited[next]) continue;
				q.push(next);
			}
		}
	}
	cout<<ans[0]<<' '<<ans[1];    
    return 0;
}
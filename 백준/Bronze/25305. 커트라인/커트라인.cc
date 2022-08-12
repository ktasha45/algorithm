#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

vector<int> adj[300001];
bool visited[300001];
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    int n,k;cin>>n>>k;
    priority_queue<int> pq;
    int x;
	while(n--){
    	cin>>x;
    	pq.push(x);
	}
	while(k--){
		if(k < 1) break;
		pq.pop();
	}
	cout<<pq.top();
    
    return 0;
}
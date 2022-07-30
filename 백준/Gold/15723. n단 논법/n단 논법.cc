#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;cin>>n;
	cin.ignore();
	vector<vector<int>> tab(26, vector<int>());
	while(n--) {
		string tmp;getline(cin,tmp);
		tab[tmp[0]-'a'].push_back(tmp[5]-'a');
	}
	int m;cin>>m;
	cin.ignore();
	while(m--) {
		string tmp;getline(cin,tmp);
		int s=tmp[0]-'a'; int e=tmp[5]-'a';
		bool flag=false;
		queue<int> q;
		bool visit[30];
		memset(visit, false, 30*sizeof(bool));
		q.push(s);
		while(!q.empty()){
			int cur = q.front();
			q.pop();
			
			if(visit[cur]) continue;
			visit[cur] = true;
			
			if(cur == e) {
				cout<<'T'<<'\n';
				flag=true;
				break;
			}
			
			for(int&i:tab[cur]) {
				if(!visit[i])q.push(i);
			}
		}
		if(!flag) cout<<'F'<<'\n';
	}
	
	return 0;
}
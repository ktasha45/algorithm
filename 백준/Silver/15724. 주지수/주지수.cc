#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;cin>>n>>m;
	vector<vector<int>> tab(n, vector<int>(m, 0));
	for(auto&i:tab){
		for(int&j:i)cin>>j;
	}
	vector<vector<int>> sumt(n+1, vector<int>(m+1, 0));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			sumt[i][j]=tab[i-1][j-1]+sumt[i-1][j]+sumt[i][j-1]-sumt[i-1][j-1];
	}
	int k;cin>>k;while(k--){
		int x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
		cout<<sumt[x2][y2]-sumt[x1-1][y2]-sumt[x2][y1-1]+sumt[x1-1][y1-1]<<'\n';
	}
	
	return 0;
}
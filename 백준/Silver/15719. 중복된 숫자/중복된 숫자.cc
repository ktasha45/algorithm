#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

bool vis[SIZE];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(vis, false, SIZE * sizeof(bool));
	int n;cin>>n;
	vector<int> v(n, 0);
	for(int&i:v) cin>>i;
	for(int&i:v) {
		if(vis[i]) {
			cout<<i;
			break;
		}
		vis[i] = true;
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int arr[200000];
int ans[200000];
bool visit[200000];
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	memset(visit, false, 200000);
	int n;cin>>n;
	int ai;
	for(int i=0;i<n;i++) {
		cin>>ai;arr[i] = ai;
	}
	ans[arr[0]] = -1;
	visit[arr[0]] = true;
	int c = 1;
	for(int i=1;i<n;i++) {
		if(visit[arr[i]]) continue;
		visit[arr[i]] = true;
		ans[arr[i]] = arr[i-1];
		c++;
	}
	cout<<c<<'\n';
	for(int i=0;i<c;i++) {
		cout<<ans[i]<<' ';
	}
	
    return 0;
}
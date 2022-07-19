#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;cin>>n;
	priority_queue<int> pq;
	while(n--) {
		int tmp;cin>>tmp;
		if(tmp) pq.push(tmp);
		else {
			if(pq.empty()) cout<<0<<'\n';
			else {
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
	}
	return 0;
}
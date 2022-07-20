#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int di[4] = {-1 ,1, 0, 0};
int dj[4] = {0, 0, -1, 1};
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<ll> pq;
	int n;cin>>n;while(n--){
		int in;cin>>in;
		if(!in) {
			if(pq.empty()) cout<<0<<'\n';
			else {
				cout<<-pq.top()<<'\n';
				pq.pop();
			}
		}
		else pq.push(-in);
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pqi priority_queue<int>
int main() {
	int n, k; cin>>n>>k;
	pqi pq;
	vi v(n, 0);
	for(int i=0; i<n; i++)
		cin >> v.at(i);
	int val = 0;
	for(int i=0; i<k; i++) val += v.at(i);
	pq.push(val);
	for(int i=0; i<n-k; i++) {
		val -= v.at(i);
		val += v.at(i+k);
		pq.push(val);
	}
	cout<<pq.top();
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pqi priority_queue<int>
int main() {
	int n, k; cin>>n>>k;
	int sol = -1;
	vi v(n, 0);
	for(int i=0; i<n; i++)
		cin >> v.at(i);
	int val = 0;
	for(int i=0; i<k; i++) val += v.at(i);
	sol = val;
	for(int i=0; i<n-k; i++) {
		val -= v.at(i);
		val += v.at(i+k);
		if(val > sol) sol = val; 
	}
	cout<<sol;
	return 0;
}
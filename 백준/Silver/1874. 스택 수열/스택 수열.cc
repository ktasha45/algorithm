#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin>>n;
	stack<int> s;
	vector<char> v;
	bool flag = false;
	int in = 1;
	for(int i=1; i<=n; i++) {
		int tmp; cin>>tmp;
		if(s.empty()) {
			s.push(in++);
			v.push_back('+');
		}
		while(1) {
			if(s.top() == tmp) {
				v.push_back('-');
				s.pop();
				break;
			}
			if(in >= n+1) {
				flag = true;
				break;
			}
			s.push(in++);
			v.push_back('+');
		}
	}
	if(flag) {
		cout<<"NO";
	}
	else {
		for(char &i : v) cout<<i<<'\n';
	}
	return 0;
}
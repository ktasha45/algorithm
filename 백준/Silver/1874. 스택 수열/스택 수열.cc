#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin>>n;
	stack<int> s;
	vector<char> ans;
	bool flag = false;
	int in = 1;
	for(int i=1; i<=n; i++) {
		int tmp; cin>>tmp;
		while(in <= tmp) {
			s.push(in++);
			ans.push_back('+');
		}
		
		if(s.top() == tmp) {
			s.pop();
			ans.push_back('-');
		}
		else {
			flag = true;
		}
	}
	if(flag) {
		cout<<"NO";
	}
	else {
		for(char &c : ans) cout<<c<<'\n';
	}
	return 0;
}
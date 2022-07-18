#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int> s;
	int n; cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++) {
		string op;
		getline(cin, op);
		
	    vector<string> v;
		stringstream ss(op);
	    string word;
	    while(ss >> word) {
	    	v.push_back(word);
	    }     
		if(!v[0].compare("push")) {
			s.push(stoi(v[1]));
		}
		else if(!v[0].compare("pop")) {
			if(s.empty()) {
				cout<<-1<<'\n';
			}
			else {
				cout<<s.top()<<'\n';
				s.pop();
			}
		}
		else if(!v[0].compare("size")) {
			cout<<s.size()<<'\n';
		}
		else if(!v[0].compare("empty")) {
			if(s.empty()) {
				cout<<1<<'\n';
			}
			else {
				cout<<0<<'\n';
			}
		}
		else {
			if(s.empty()) {
				cout<<-1<<'\n';
			}
			else {
				cout<<s.top()<<'\n';
			}
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class C {
public:
	int s, t, depth;
	C(int _s, int _t, int _depth) {
		this->s = _s;
		this->t = _t;
		this->depth = _depth;
	}
};

int solve(int s, int t) {
	int ans = 1;
	
	queue<C> sp;
	sp.push(C(s, t, 0));
	while(!sp.empty()) {
		C cur = sp.front();
		sp.pop();
		
		if(cur.s == cur.t) {
			ans = cur.depth;
			break;
		}
		
		if(cur.s+1 <= cur.t)
			sp.push(C(cur.s+1, cur.t, cur.depth+1));
		if(cur.s*2 <= cur.t+3)
			sp.push(C(cur.s*2, cur.t+3, cur.depth+1));
	}
	
	return ans;
}

int main() {
	int c, s, t;
	cin >> c;
	while(c--) {
		cin >> s >> t;
		cout << solve(s, t) << '\n';
	}
	return 0;
}
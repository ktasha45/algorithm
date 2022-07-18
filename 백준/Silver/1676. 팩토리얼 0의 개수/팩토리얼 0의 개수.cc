#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin>>n;
	int c2=0, c5=0;
	bool flag;
	for(int i=2; i<=n; i++) {
		int ti = i;
		flag = true;
		while(flag) {
			flag = false;
			if(ti%2==0) {
				ti /= 2;
				c2++;
				flag = true;
			}
			if(ti%5==0) {
				ti /= 5;
				c5++;
				flag = true;
			}
		}
	}
	cout<<min(c2, c5);
	return 0;
}
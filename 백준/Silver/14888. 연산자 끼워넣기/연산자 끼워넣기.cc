#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int ma = -(1<<30), mi = 1<<30;
int tab[20], arr[4];
int n;

void bt(int cur, int depth) {
	if(depth >= n) {
		if(mi > cur) mi = cur;
		if(ma < cur) ma = cur;
		return;
	}
	for(int i=0; i<4; i++) {
		if(arr[i] > 0) {
			arr[i]--;
			if(i == 0) {
				bt(cur + tab[depth], depth + 1);
			}
			else if(i == 1) {
				bt(cur - tab[depth], depth + 1);
			}
			else if(i == 2) {
				bt(cur * tab[depth], depth + 1);
			}
			else {
				bt(cur / tab[depth], depth + 1);
			}
			arr[i]++;
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n;
	for(int i=0; i<n; i++) cin>>tab[i];
	for(int i=0; i<4; i++) cin>>arr[i];
	
	bt(tab[0], 1);
	
	cout<<ma<<'\n'<<mi;
	
	return 0;
}
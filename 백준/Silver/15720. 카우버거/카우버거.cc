#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int b,c,d;cin>>b>>c>>d;
	vector<int> bb(b), cc(c), dd(d);
	for(int&i:bb)cin>>i;
	for(int&i:cc)cin>>i;
	for(int&i:dd)cin>>i;
	sort(bb.begin(), bb.end(), greater<int>());
	sort(cc.begin(), cc.end(), greater<int>());
	sort(dd.begin(), dd.end(), greater<int>());
	int minn=min(d, min(b, c));
	int sale=0, nosale=0;
	for(int i=0;i<b;i++) {
		if(i<minn) sale+=bb[i];
		else nosale+=bb[i];
	}
	for(int i=0;i<c;i++) {
		if(i<minn) sale+=cc[i];
		else nosale+=cc[i];
	}
	for(int i=0;i<d;i++) {
		if(i<minn) sale+=dd[i];
		else nosale+=dd[i];
	}
	cout<<sale+nosale<<'\n'<<(sale/10)*9+nosale;
	
	return 0;
}
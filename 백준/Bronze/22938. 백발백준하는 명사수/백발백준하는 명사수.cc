#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll x1,y1,r1,x2,y2,r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	
	ull dist = 0;
	if(x1 > x2) dist += pow((x1-x2), 2);
	else dist += pow((x2-x1), 2);
	
	if(y1>y2) dist+=pow((y1-y2), 2);
	else dist+=pow((y2-y1), 2);

	if(dist >= pow((r1+r2), 2)) cout<<"NO";
	else cout<<"YES";
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int c=0,ans=0;
	bool flag=false;
	int a,t,m;cin>>a>>t>>m;
	for(int i=1,j=0;;i++){
		for(int h=1;h<=4;h++,j=(j+1)%a) {
			if(h%2==0 && m==1) c++;
			else if(h%2==1 && m==0) c++;
			if(c==t) {
				flag=true;
				ans=j;
				break;
			}
		}
		if(flag) break;
		for(int h=1;h<=i+1;h++,j=(j+1)%a){
			if(m==0) c++;
			if(c==t) {
				flag=true;
				ans=j;
				break;
			}
		}
		if(flag) break;
		for(int h=1;h<=i+1;h++,j=(j+1)%a){
			if(m==1) c++;
			if(c==t) {
				flag=true;
				ans=j;
				break;
			}
		}
		if(flag) break;
	}
	
	cout<<ans;
	return 0;
}
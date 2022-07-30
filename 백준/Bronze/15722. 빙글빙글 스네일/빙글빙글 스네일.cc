#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin>>n;
	int x=0, y=0; int k=1;
	for(int i=1; k<=n; i++) {
		for(int j=1; k<=n & j<=2*i; j++) {
			if(i%2==1 & j<=i) {
				y++;
			}
			else if(i%2==1 & j>i) {
				x++;
			}
			else if(i%2==0 & j<=i) {
				y--;
			}
			else {
				x--;
			}
			k++;
		}
	}
	cout<<x<<' '<<y<<'\n';
	return 0;
}
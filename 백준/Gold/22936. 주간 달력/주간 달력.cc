#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE 1<<24

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    int n,m;cin>>n>>m;
    vector<int> tab(50002 + 10000, 0);
    vector<int> que(50002 + 10000, 0);
    while(m--){
    	int s, e;cin>>s>>e;
		tab[s]++;
		tab[e+1]--;
		que[e+1]++;
	}
	for(int i=1; i<50002; i++) tab[i] += tab[i-1];
	for(int i=1; i<50002; i++) tab[i] += tab[i-1];
//	for(int i=0; i<30; i++) cout<<tab[i]<<' ';
//	cout<<'\n';
	
	int maxx = -1;
	int start = -1;
	for(int i=1; i<50002; i++) {
		int ss = i; int ee = i + n*7 - 1;
		if(tab[ee] - tab[ss-1] > maxx) {
			maxx = tab[ee] - tab[ss-1];
			start = i;
		}
	}
	
	int ans=0;
	for(int i=0;i<n;i++){
		int ss = (i*7) + start;
		for(int j=ss+1;j<=ss+6;j++){
			ans+=que[j];
		}
		ans+=tab[ss+6]-tab[ss+5];
	}
	cout<<ans;
	
    return 0;
}
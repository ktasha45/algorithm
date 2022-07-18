#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<pair<int, int>> vpii;
int tab[9][9];
bool flag = false;

void bt(int depth) {
	if(depth >= vpii.size()) {
		flag = true;
		return;
	}
	
	bool v[10];
	for(int i=0; i<10; i++) v[i] = false;
	
	int i = vpii[depth].first;
	int j = vpii[depth].second;
	
	int si = i/3;
	int sj = j/3;
	for(int p=si*3; p<si*3+3; p++) {
		for(int q=sj*3; q<sj*3+3; q++) {
			if(tab[p][q] != 0) {
				v[tab[p][q]] = true;
			}
		}
	}
	for(int p=0; p<9; p++) {
		if(tab[p][j] != 0) v[tab[p][j]] = true;
		if(tab[i][p] != 0) v[tab[i][p]] = true;
	}
	for(int p=1; p<=9; p++) {
		if(!v[p]) {
			tab[i][j] = p;
			bt(depth + 1);
		}
		if(flag) return;
	}
	tab[i][j] = 0;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			int tmp; cin>>tmp;
			tab[i][j] = tmp;
			if(tmp == 0) vpii.push_back(make_pair(i, j));
		}
	}
	
	bt(0);
	
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			cout<<tab[i][j]<<' ';
		}
		cout<<'\n';
	}
	
	return 0;
}
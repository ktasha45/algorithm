#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m; cin>>n>>m;
	char v[100][100];
	for(int i=0; i<n; i++) {
		string tmp; cin>>tmp;
		for(int j=0; j<m; j++) {
			v[i][j] = tmp[j];
		}
	}
	int sol = 32800000;
	for(int i=0; i<=n-8; i++) {
		for(int j=0; j<=m-8; j++) {
			char dist[8][8], dist2[8][8];
			for(int p=i; p<i+8; p++) {
				for(int q=j; q<j+8; q++) {
					dist[p-i][q-j] = v[p][q];
					dist2[p-i][q-j] = v[p][q];
				}
			}
			int loc_sol = 0;
			for(int p=0; p<8; p++) {
				for(int q=0; q<8; q++) {
					if(p >= 7 && q >= 7) continue;
					if(q < 7 && dist[p][q] == dist[p][q+1]) {
						if(dist[p][q+1] == 'W') dist[p][q+1] = 'B';
						else dist[p][q+1] = 'W';
						loc_sol++;
					}
					if(p < 7 && dist[p][q] == dist[p+1][q]) {
						if(dist[p+1][q] == 'W') dist[p+1][q] = 'B';
						else dist[p+1][q] = 'W';
						loc_sol++;
					}
				}
			}
			
			int loc_sol2 = 0;
			if(dist2[0][0] == 'W') dist2[0][0] = 'B';
			else dist2[0][0] = 'W';
			loc_sol2++;
			
			for(int p=0; p<8; p++) {
				for(int q=0; q<8; q++) {
					if(p >= 7 && q >= 7) continue;
					if(q < 7 && dist2[p][q] == dist2[p][q+1]) {
						if(dist2[p][q+1] == 'W') dist2[p][q+1] = 'B';
						else dist2[p][q+1] = 'W';
						loc_sol2++;
					}
					if(p < 7 && dist2[p][q] == dist2[p+1][q]) {
						if(dist2[p+1][q] == 'W') dist2[p+1][q] = 'B';
						else dist2[p+1][q] = 'W';
						loc_sol2++;
					}
				}
			}
			if(loc_sol > loc_sol2) loc_sol = loc_sol2;
			if(sol > loc_sol) sol = loc_sol;
		}
	}
	cout<<sol;
	return 0;
}
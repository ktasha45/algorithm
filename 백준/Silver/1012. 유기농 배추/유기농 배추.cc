#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int di[4] = {-1 ,1, 0, 0};
int dj[4] = {0, 0, -1, 1};
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t; while (t--) {
		int m, n, k; cin >> m >> n >> k;
		vector<vector<int>> tab(n, vector<int>(m, 0));
		vector<pair<int, int>> ind;
		while (k--) {
			int i, j; cin >> i >> j;
			tab[j][i] = 1;
			ind.push_back(make_pair(j, i));
		}
		vector<vector<bool>> v(n, vector<bool>(m, false));
		queue<pair<int, int>> q;
		int ans = 0;
		for (auto& i : ind) {
			bool flag = false;
			q.push(i);
			while (!q.empty()) {
				int& curi = q.front().first;
				int& curj = q.front().second;
				q.pop();
				if(curi < 0 || curi >= n || curj < 0 || curj >= m) continue;
				if (v[curi][curj] || tab[curi][curj] == 0) continue;
				v[curi][curj] = true;
				flag = true;
				for (int i = 0; i < 4; i++)
					q.push(make_pair(curi + di[i], curj + dj[i]));
			}
			if (flag) ans++;
		}
		cout<<ans<<'\n';
	}
	return 0;
}
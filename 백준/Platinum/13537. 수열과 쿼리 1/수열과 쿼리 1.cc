#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int n, m;
vector<int> *tree;
int find(int node, int start, int end, const int left, const int right, const int finder) { // left, right, finder은 고정 
	if(start > right  || end < left) // 겹치지 않음 
		return 0;
 	if(start >= left && end <= right) { // 포함됨 
		return (int)tree[node].size() - (upper_bound(tree[node].begin(), tree[node].end(), finder) - tree[node].begin());
	}
	return find(node*2, start, (start+end)/2, left, right, finder) + find(node*2+1, (start+end)/2+1, end, left, right, finder);
}
void query() {
	cin>>m;
	int i, j, k;
	while(m--) {
		cin>>i>>j>>k;
		cout<<find(1, 1, n, i, j, k)<<'\n';
	}
}
void makeTree(int node, const int val, const int index, int start, int end) {
	if(index<start || index>end) return;
	tree[node].push_back(val);
	if(start!=end) {
		int mid = (start+end)/2;
		makeTree(node*2, val, index, start, mid);
		makeTree(node*2+1, val, index, mid+1, end);
	}
}
int main(){
	fastio;
	cin>>n;
	int temp;
	int size=pow(2, ceil(log2(n))+1)+1;
	tree=new vector<int>[size];
	for(int i=1; i<=n; i++) {
		cin>>temp;
		makeTree(1, temp, i, 1, n);
	}
	for(int i=0; i<size; i++) sort(tree[i].begin(), tree[i].end());
	/*for(int i=1; i<inputArr.size(); i++) cout<<inputArr[i]<<' ';
	cout<<'\n';
	for(int i=1; i<size; i++) {
		for(int j:tree[i])
			cout<<j<<' ';
		cout<<'\n';
	}*/
	query();
}
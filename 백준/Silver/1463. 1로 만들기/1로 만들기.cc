#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> vi(1000001, 1000000);
	vi[1] = 0;
	int n; cin>>n;
	
	for(int i=1; i<n; i++){
		vi[i+1] = min(vi[i]+1, vi[i+1]);
		if(i*2 <= 1000000)
			vi[i*2] = min(vi[i]+1, vi[i*2]);
		if(i*3 <= 1000000)
			vi[i*3] = min(vi[i]+1, vi[i*3]);
	}
	
	cout<<vi[n];
	
	
	return 0;
}
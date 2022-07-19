#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define INF 1000000001

int main(){
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	
	int n; cin>>n;
	vector<int> numList;
	for(int i=0; i<n; i++) {
		int num; cin>>num;
		numList.push_back(num);
	}
	sort(numList.begin(), numList.end());
	//for(const auto &num : numList) cout<<num<<' ';
	
	int start = 0, end = numList.size() - 1;
	pair<int, int> result(INF, INF);
	int iterator = 0;
	while(1) {
		if(start >= end) break;
		
		if(abs(numList[start] + numList[end]) < abs(result.first + result.second)) {
			result.first = numList[start];
			result.second = numList[end];
		}
		
		if(numList[start] + numList[end] < 0) {
			start++;
		}
		else if(numList[start] + numList[end] > 0){
			end--;
		}
		else {
			if(result.first > result.second) {
				cout<<result.second<<' '<<result.first;
			}
			else {
				cout<<result.first<<' '<<result.second;
			}
			iterator = 1;
			break;
		}
		
	}
	
	if(iterator == 0) {
		if(result.first > result.second) {
			cout<<result.second<<' '<<result.first;
		}
		else {
			cout<<result.first<<' '<<result.second;
		}
	}
	
	
	
	return 0;
}	
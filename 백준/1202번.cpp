#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {	
	int n, k;
	cin >> n >> k; 
	vector<pair<int,int>> v1(n);
	vector<int> v2(k);
	for (int i = 0; i < n; i++) cin >> v1[i].first >> v1[i].second; 
	for (int i = 0; i < k; i++) cin >> v2[i]; 
	sort(v1.begin(), v1.end()); 
	sort(v2.begin(), v2.end()); 
	priority_queue <int> q;
	long long ans = 0; 
	int idx = 0; 
	for (int i = 0; i < k; i++) {
		while (idx < n && v1[idx].first <= v2[i])q.push(v1[idx++].second); 
		if (q.size()) {
			ans += q.top(); 
			q.pop(); 
		}
	}
	cout <<ans; 
}
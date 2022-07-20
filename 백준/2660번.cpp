#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std; 
int main() {
	int n; 
	cin >> n; 
	int minCnt = 10000000; 
	vector<vector<int>> v(n+1);
	int result[51] = { 0, }; 
	while (1) {
		int a, b;
		cin >> a >> b;
		if (a == -1 && b == -1)break;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		int cnt = 0; 
		vector <bool> visited(n + 1, false); 
		queue<int> q; 
		visited[i] = true;
		q.push(i); 
		while (!q.empty()) {
			
			int sz = q.size(); 
			while (sz--) {
				int x = q.front(); 
				bool check = false; 
				q.pop(); 
				for (int j = 0; j < v[x].size(); j++) {
					if (!visited[v[x][j]]) {
						if (!check) { cnt++; check = true; }
						q.push(v[x][j]); 
						visited[v[x][j]] = true; 
					}
				}
			}
		}
		minCnt = min(minCnt, cnt); 
		result[i] = cnt; 
	}
	int resultCnt = 0;
	vector<int> res; 
	for (int i = 1; i <= n; i++) {
		if (minCnt == result[i]) {
			res.push_back(i);
			resultCnt++;
		}
	}
	cout << minCnt << " " << resultCnt << "\n"; 
	for (auto x : res) cout << x << " "; 
	return 0; 
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
 
int main() {
	int n, m; 
	cin >> n >> m; 
	vector <vector<int>> v(n + 1);
	int indegree[100001];
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b; 
		v[a].push_back(b); 
		indegree[b]++;
	}
	queue <int> q; 
	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0)q.push(i);
	}
	while (!q.empty()) {
		cout << q.front()<<" "; 
		int idx = q.front(); 
		for (int i = 0; i < v[idx].size(); i++) {
			if (!--indegree[v[idx][i]])q.push(v[idx][i]);
		}		
		q.pop(); 
	}	
}
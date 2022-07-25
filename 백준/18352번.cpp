#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std; 
queue <int> q; 
vector<int> v[300001];
int dis[300001]; 
int n, m, k, x;
void bfs(int start) {
	dis[start] = -1; 
	int cnt = 1; 
	while (!q.empty()) {
		int n = q.size(); 
		while (n--) {
			int x = q.front(); 
			q.pop(); 
			for (int i = 0; i < v[x].size(); i++) {
				if (!dis[v[x][i]]) { 
					q.push(v[x][i]); 
					dis[v[x][i]] = cnt;				
				}
			}
		}
		cnt++; 
	}
}

int main() {		
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0); 

	cin >> n >> m >> k >> x; 
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b; 
		v[a].push_back(b); 
	}
    
	q.push(x); 
	bfs(x);
    
	int check = 0; 
	for (int i = 1; i <= n; i++) {
		if (dis[i] == k) {
			cout << i << "\n"; 
			check = 1; 
		}
	}
	if (!check)cout << "-1"; 
}
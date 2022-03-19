#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
using namespace std; 
int map[1000][1000]; 
int visited[1000][1000]; 
queue <pair<int, int>> q; 
int m, n;
int dx[4] = { 0,0,1,-1 }; 
int dy[4] = { 1,-1,0,0 }; 
int cnt = 0;
using namespace std;
void bfs() {
	int x, y; 
	while (!q.empty()) {
		vector <pair<int, int>>v; 
		while (!q.empty()) {
			tie(y, x) = q.front(); 
			q.pop(); 
			v.push_back({ y,x }); 
		}
		int check = 0; 
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < 4; j++) {
				int nx = dx[j] + v[i].second; 
				int ny = dy[j] + v[i].first; 
				if (nx<0 || nx>=n || ny<0 || ny>=m || map[ny][nx] == -1)continue; 
				if (visited[ny][nx] == 1)continue; 
				visited[ny][nx] = 1; 
				check = 1; 
				q.push({ ny,nx }); 
			}
		}
		if(check)cnt++; 
	}
}
int main() {
	cin >> n >> m; 
 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j]; 
			if (map[i][j] == 1) {
				q.push({ i,j }); 
				visited[i][j] = 1; 

			}
			if (map[i][j] == -1)visited[i][j] = 1; 
		}
	}

	bfs(); 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == 0) {
				cout << -1; 
				return 0; 
			}
		}
	}
	cout << cnt; 
}
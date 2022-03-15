#include <iostream>
#include <tuple>
#include <queue>
#include <algorithm>
using namespace std;
int dx[4] = { 0,0,1,-1 }; 
int dy[4] = { 1,-1,0,0 }; 
int m, n, k; 
int map[100][100]; 
int visited[100][100]; 
int area_cnt; 
vector <int> result; 
queue <pair<int, int>>q; 
void bfs() {
	int x, y; 
	int cnt = 1; 
	while (!q.empty()) {
		tie(y, x) = q.front(); 
		q.pop(); 
		int nx, ny; 
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i]; 
			nx = x + dx[i]; 
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue; 
			if (map[ny][nx] == 1 )continue; 
			q.push({ ny,nx }); 
			map[ny][nx] = 1; 
			cnt++; 
		}
	}
	result.push_back(cnt); 
}


int main() {
	cin >> m >> n >> k; 
	while (k--) {
		int x1, y1, x2, y2; 
		cin >> x1 >> y1 >> x2 >> y2; 
		for (int y = y1; y < y2; y++) {
			for (int x = x1; x < x2; x++) {
				map[y][x] = 1; 
			}
		}
	}	
	for (int y = 0; y < m; y++) {
		for (int x = 0; x < n; x++) {
			if (map[y][x] == 0) {
				q.push({ y,x }); 
				area_cnt++; 
				map[y][x] = 1; 
				bfs(); 				
			}
		}
	}
	sort(result.begin(), result.end()); 
	cout << area_cnt << "\n"; 
	for (auto x : result)cout << x << " "; 
	return 0; 
}

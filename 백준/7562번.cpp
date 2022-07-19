#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std; 
int dx[8] = { 1,2,2,1,-1,-2,-2,-1 }; 
int dy[8] = { -2,-1,1,2,2,1,-1,-2 }; 
int main() {
	int testCase; 
	cin >> testCase; 
	while (testCase--) {
		int n; cin >> n; 
		int sx, sy; 
		int ex, ey;
		cin >> sx>> sy >> ex >> ey ;
		queue<pair<int, int>> q;
		int dist[300][300] = { 0, }; 
		int visited[300][300] = { 0, }; 
		q.push({ sy,sx }); 
		visited[sy][sx] = 1; 
		int cnt = 0; 
		while (!q.empty()) {
			int sz = q.size(); 
			int y, x;
			tie(y, x) = q.front();
			q.pop();
			for (int i = 0; i < 8; i++) {
				int nx = dx[i] + x;
				int ny = dy[i] + y;
				if (ny >= n || ny < 0 || nx >= n || nx < 0)continue;
				if (visited[ny][nx])continue;
				q.push({ ny,nx });
				visited[ny][nx] = 1;
				dist[ny][nx] = dist[y][x] + 1;
			}
		}
		cout << dist[ey][ex] << "\n"; 
	}
}
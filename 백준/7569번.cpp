#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std; 
int tomato; 
int m, n, layer; 
int dx[4] = { 0,0,1,-1 }; 
int dy[4] = { 1,-1,0,0 }; 
int map[100][100][100]; 
int visited[100][100][100]; 
int dist[100][100][100]; 
int time; 
queue <pair<pair<int, int>, int>>q; 
void bfs() {
	
	while (!q.empty()) {
		int y, x, lay;
		int sz= q.size(); 
		
		while (sz--) {
			
			y = q.front().first.first;
			x = q.front().first.second;
			lay = q.front().second;
		
			q.pop(); 

			for (int i = 0; i < 6; i++) {
				int nx = x;
				int ny = y;
				int l = lay;
				if (i == 4) l += 1;
				else if (i == 5) l -= 1;
				else {
					nx += dx[i];
					ny += dy[i];
				}
				if (l < 0 || l >= layer || ny < 0 || ny >= m || nx < 0 || nx >= n)continue;
				if (map[l][ny][nx] == -1||map[l][ny][nx]|| visited[l][ny][nx])continue;
			
				map[l][ny][nx] = 1; 
				dist[l][ny][nx] = dist[lay][y][x] + 1; 
				time = dist[l][ny][nx]; 
				tomato--;
				visited[l][ny][nx] = 1; 
				q.push(make_pair(make_pair(ny, nx), l));
			}
		}
		
	}
}


int main() {
	cin >> n >> m >> layer; 
	for (int i = 0; i < layer; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				cin >> map[i][j][k]; 
				if (map[i][j][k] == 1) {
					visited[i][j][k] = 1; 
					q.push(make_pair(make_pair(j, k), i)); 
				}
				if (map[i][j][k] == 0)tomato++; 
			}
		}
	}
	bfs(); 	
	if (tomato)cout << -1;
	else cout<<time; 
	return 0; 


}
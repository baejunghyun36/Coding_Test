#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int n; 
int map[500][500]; 
int dis[500][500]; 
int visited[500][500]; 
int dx[4] = { 0,0,1,-1 }; 
int dy[4] = { 1,-1,0,0 }; 
int max_number = 0;
int dfs(int y, int x) {

	int& ret = dis[y][x]; 
	if (ret)return ret; 
	ret = 0; 
	for (int i = 0; i < 4; i++) {
		int nx = dx[i] + x; 
		int ny = dy[i] + y; 
		if (map[ny][nx] <= map[y][x])continue;
		if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue; 
		if (visited[ny][nx] == 1)continue; 
		visited[ny][nx] = 1; 
		ret = max(ret, dfs(ny, nx) + 1); 
		visited[ny][nx] = 0; 
	}
	return ret; 
}
int main() {
	cin >> n; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j]; 
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = 1; 
			max_number = max(max_number, dfs(i, j)); 
			visited[i][j] = 0; 

		}
	}
	cout << max_number+1; 
	
}
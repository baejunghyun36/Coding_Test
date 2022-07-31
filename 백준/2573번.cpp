#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>
#include <cstring>
using namespace std; 
int m, n;
int map[300][300]; 
int visited[300][300]; 
int temp[300][300]; 
int result; 
int dx[4] = { 0,0,-1,1 }; 
int dy[4] = { 1,-1,0,0 }; 
queue <pair<int, int>> q; 
void bfs() {
	//연결되어있는 빙산 visited체크 하기. 
	while (!q.empty()) {
		int y, x; 
		tie(y, x) = q.front(); 
		q.pop(); 
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i]; 
			int ny = y + dy[i]; 
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
			if (temp[ny][nx] == 0 || visited[ny][nx] == 1)continue; 
			visited[ny][nx] = 1; 
			q.push({ ny,nx }); 
		}
	}
}
void check() {
	result++; 
	//녹일 빙산 계산 해서 temp에 담기 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j]) {
				int cnt = 0; 
				for (int k = 0; k < 4; k++) {
					int nx = j + dx[k]; 
					int ny = i + dy[k]; 
					if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue; 
					if (map[ny][nx] == 0)cnt++; 
				}
				int res = map[i][j] - cnt; 
				if (res <= 0)temp[i][j] = 0;
				else temp[i][j] = res; 
			}
		}
	}
	int cnt = 0; 
	//덩어리 계산
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (temp[i][j]&&visited[i][j]==0) {
				visited[i][j] = 1; 
				q.push({ i, j });
				cnt++; 
				bfs(); 
			}
		}
	}
	//덩어리가 2개 이상이면 종료.
	if (cnt >= 2) {
		cout << result; 
		exit(0); 
	}
	else {
		bool c = false; 
		//temp값을 map에 저장. 
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				map[i][j]= temp[i][j] ;
				if (temp[i][j])c = true; 
			}
		}
		//map이 모두 0이면 0출력 및 종료
		if (!c) {
			cout << 0; 
			exit(0); 
		}
		//초기화 
		memset(temp, 0, sizeof(temp)); 
		memset(visited, 0, sizeof(visited)); 
		check(); 
	}
}

int main() {
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0); 
	cin >> m >> n; 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j]; 
		}
	}
	check(); 
	
}
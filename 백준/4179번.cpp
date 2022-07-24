#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <tuple>
#include <string>
using namespace std;
vector <string> map; 
vector <string> visited; 
queue <pair<int, int>> j_l; //지훈위치
queue <pair<int, int>> f_l; //불위치
int m, n; 
int dx[4] = { 0,0,1,-1 }; 
int dy[4] = { 1,-1,0,0 }; 

void bfs() {
	int result = 0; 
	while (!j_l.empty()) {
		//f_l 불, j_l 지훈 
		int n1 = f_l.size(); 
		while (n1--) {
			int fx, fy; 
			tie(fy, fx) = f_l.front();
			f_l.pop();
			for (int i = 0; i < 4; i++) {
				int nx = fx + dx[i];
				int ny = fy + dy[i];
				if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
				if (map[ny][nx] == '#' || map[ny][nx] == 'F')continue;
				map[ny][nx] = 'F';
				f_l.push({ ny,nx });
			}
		}
		n1 = j_l.size();
		while (n1--) {
			int  jx, jy;
			tie(jy, jx) = j_l.front();
			j_l.pop();
			for (int i = 0; i < 4; i++) {
				int nx = jx + dx[i];
				int ny = jy + dy[i];
				if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
					cout << result + 1;
					return;
				}
				if (map[ny][nx] == '#' || visited[ny][nx] == '1' || map[ny][nx] == 'F')continue;
				visited[ny][nx] = '1';
				j_l.push({ ny,nx });
			}
		}
		result++; 
	}
	cout << "IMPOSSIBLE"; 
	return; 

}

int main() {
	cin >> m >> n; 
	map.resize(m, ""); 
	visited.resize(m, "");
	for (int i = 0; i < m; i++) {
		cin >> map[i]; 
		for (int j = 0; j < n; j++) {
			visited[i] += '0'; 
			if (map[i][j] == 'J') {
				j_l.push({ i, j });
				visited[i][j] = '1'; 
			}
			else if (map[i][j] == 'F') {
				f_l.push({ i, j });
				visited[i][j] = '1'; 
			}
		}
	}
	bfs(); 
}
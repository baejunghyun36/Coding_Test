#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <tuple>
using namespace std;
int l, m, n;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
vector<vector<string>> map;
vector<vector<string>> visited;
queue <pair<int, int>> q;
queue <pair<int, int>> layer_cnt;
int exit_y, exit_x, exit_layer;
int result;
void bfs() {
	while (!q.empty()) {
		int y, x, lay, cnt;
		tie(y, x) = q.front();
		tie(lay, cnt) = layer_cnt.front();
		layer_cnt.pop();
		q.pop();
		if (lay == exit_layer && y == exit_y && x == exit_x) { 
			result = cnt; 
			break; 
		}
		for (int i = 0; i < 6; i++) {
			int nx, ny, sub_lay;
			if (i == 4) {
				sub_lay = lay - 1;
				nx = x;
				ny = y;
			}
			else if (i == 5) {
				sub_lay = lay + 1;
				nx = x;
				ny = y;
			}
			else {
				sub_lay = lay;
				nx = x + dx[i];
				ny = y + dy[i];
			}

			if (sub_lay < 0 || sub_lay >= l)continue;
			if (ny < 0 || ny >= m || nx < 0 || nx >= n)continue;
			if (visited[sub_lay][ny][nx] == '1' || map[sub_lay][ny][nx] == '#')continue;

			visited[sub_lay][ny][nx] = '1';
			layer_cnt.push({ sub_lay, cnt + 1 });
			q.push({ ny, nx });

		}
	}
}

int main() {
	while (1) {
		cin >> l >> m >> n;
		if (l == 0 && m == 0 && n == 0)break;
		map.resize(l, vector<string>(m, ""));
		visited.resize(l, vector<string>(m, ""));
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < m; j++) {
				cin >> map[i][j];
				for (int k = 0; k < n; k++) {
					visited[i][j] += '0';
				}
			}
		}

		for (int i = 0; i < l; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = 0; k < n; k++) {
					if (map[i][j][k] == 'S') {
						q.push({ j,k });
						layer_cnt.push({ i, 0 });
						visited[i][j][k] = '1';
					}
					if (map[i][j][k] == 'E') {
						exit_y = j;
						exit_x = k;
						exit_layer = i;
					}
				}
			}
		}
		bfs();			

		if (result) cout << "Escaped in " << result << " minute(s).\n";		
		else cout << "Trapped!\n";
		result = 0;
		visited.clear();
		map.clear();
		while (!q.empty())q.pop(); 
		while (!layer_cnt.empty())layer_cnt.pop(); 
	}
}
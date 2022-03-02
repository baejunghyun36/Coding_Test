#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
#include <string>
using namespace std;
const int max_n = 53; 
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	int t; cin >> t; 
	while (t--) {
		int n;
	
		int cnt = 0; 
		int height;
		int width;
		int map[max_n][max_n];
		int visited[max_n][max_n];
		for (int i = 0; i < max_n; i++) {
			for (int j = 0; j < max_n; j++) {
				map[i][j] = visited[i][j] = 0; 
			}
		}
		cin >> width >> height >> n; 

		for (int i = 0; i < n; i++) {
			int x, y; cin >> x >> y; 
			map[y][x] = 1; 
			visited[y][x] = 0; 
		}
	
		for (int y = 0; y < height; y++) {
			for (int x = 0; x < width; x++) {
				if (map[y][x] && visited[y][x] == 0) {
					queue <pair<int, int>> q;
					q.push({ y,x });
					visited[y][x] = 1;
					cnt++;
					int x1, y1;
					while (q.size()) {
						tie(y1, x1) = q.front();
						q.pop();
						for (int i = 0; i < 4; i++) {
							int ny = y1 + dy[i];
							int nx = x1 + dx[i];
							if (nx < 0 || nx >= width || ny < 0 || ny >= height || map[ny][nx] == 0)continue;
							if (visited[ny][nx])continue;
							visited[ny][nx] = 1;
							q.push({ ny,nx }); 
						}
					}
				}
			}
		}
	
		cout << cnt << "\n"; 
	}	
	


}
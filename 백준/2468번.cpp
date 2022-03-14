#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int map[100][100], check[100][100], n;
int answer = INT_MIN;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 }; 
void dfs(int y, int x) {
	for (int i = 0; i < 4; i++) { //현재 x,y 좌표에서 상하좌우 살피기
		int nx = dx[i] + x; 
		int ny = dy[i] + y; 
		if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue; //맵 이탈	
		if (check[ny][nx] == -1)continue;  //잠겨져 있을 때
		check[ny][nx] = -1; //check 맵 잠굼 처리
		dfs(ny, nx); 
	}
	return; 
}
int main() {
	cin >> n;
	//bool check_area= false; // 모든 경우의 수를 돌았을 때 다 짐긴 경우
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin>>map[y][x];
		}
	}
	for (int h = 0; h <= 100; h++) {
		for (int y = 0; y < n; y++) {
			for (int x = 0; x < n; x++) {
				if (h >= map[y][x])check[y][x] = -1; //잠김
				else { 
					//check_area = true; 
					check[y][x] = 0; 
				}
			}
		}
		int cnt = 0; 
		for (int x = 0; x < n; x++) {
			for (int y = 0; y < n; y++) {
				if (check[y][x] == 0) {//잠기지 않은 영역 살피기
					check[y][x] = -1; 
					cnt++; 
					dfs(y, x); 
				}
			}
		}
		answer = max(answer, cnt); 
	}
	//모든 경우의 수를 다 돌아봐도 다 잠긴 상태이면 dfs가 발생 
	//if (check_area == false)cout << 1; 
	cout << answer; 
	return 0; 
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <tuple>
using namespace std;
int map[101][101];
int visited[101][101];
int n, k, l;
queue<pair<int, char>>order;
queue<pair<int, int>> end_point;
int result;

//0이면 오른쪽으로
//1이면 아래쪽ㅇ로
//2이면 왼쪽으로 
//3이면 위쪽으로


int where_to(char rotat, int check) {

	if (rotat == 'D') {
		if (check == 0)return 1;
		else if (check == 1)return 2;
		else if (check == 2)return 3;
		else return 0;
	}
	else if (rotat == 'L') {
		if (check == 0)return 3;
		else if (check == 1)return 0;
		else if (check == 2)return 1;
		else return 2;
	}
}

void check_func(int cur_y, int cur_x) {
	if (cur_x <= 0 || cur_x > n || cur_y <= 0 || cur_y > n|| visited[cur_y][cur_x]) {
		cout << result+1;
		exit(0);
	}
	return; 
}


void apple_check(int cur_y, int cur_x) {
	int end_y = 0; 
	int end_x = 0; 
	if (map[cur_y][cur_x]==1) { //사과라면
		visited[cur_y][cur_x] = 1;
		map[cur_y][cur_x] = 0; //사과먹음
		end_point.push({ cur_y, cur_x });
	}
	else if(map[cur_y][cur_x]==0){//사과가 없으면		
		end_y = end_point.front().first; 
		end_x = end_point.front().second;
		visited[end_y][end_x] = 0;
		visited[cur_y][cur_x] = 1;
		end_point.pop();
		end_point.push({ cur_y, cur_x });
	}
}


void bfs() {
	int cur_y, cur_x, end_y, end_x; 
	cur_y = cur_x = end_y = end_x = 1; 
	int check = 0; 
	visited[cur_y][cur_x] = 1; 
	end_point.push({ end_y, end_x }); 

	while (!order.empty()) {

		int time = 0;
		char rotat; 
		time = order.front().first; 
		rotat = order.front().second; 
		order.pop();

		if (check == 0) {
			//오른쪽
			for (int i = 0; i < time; i++) {
				cur_x += 1;
				check_func(cur_y, cur_x); 
				apple_check(cur_y, cur_x); 
				result++;
			}
		}
		else if (check == 1) {
			//아래쪽
			for (int i = 0; i < time; i++) {
				cur_y += 1;
				check_func(cur_y, cur_x);
				apple_check(cur_y, cur_x);
				result++;
			}
		}
		else if (check == 2) {
			//왼쪽
			for (int i = 0; i < time; i++) {
				cur_x -= 1;
				check_func(cur_y, cur_x);
				apple_check(cur_y, cur_x);
				result++;
			}
		}
		else {
			//위쪽
			for (int i = 0; i < time; i++) {
				cur_y -= 1;
				check_func(cur_y, cur_x);
				apple_check(cur_y, cur_x);
				result++;
			}
		}
		check = where_to(rotat, check);
	}
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		int y, x; cin >> y >> x; 
		map[y][x] = 1; 
	}
	cin >> l;
	for (int i = 0; i < l; i++) {
		int x; char c;
		cin >> x >> c;
		order.push({ x,c });//x초, c방향으로 90도 회전 
	}
	bfs();
}
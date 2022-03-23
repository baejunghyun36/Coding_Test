#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int dx[4] = { 0,0,-1,1 }; 
int dy[4] = { 1,-1, 0 ,0 }; 
using namespace std; 
int a, b;
int check[26]; 
int max1 = -1; 
vector <string> v;
void dfs(int x, int y,  int level, int res) {
	if (level == a * b) {
		return; 
	}
	else {
		int ch = 0; 
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i]; 
			int ny = y + dy[i]; 
			if (nx >= 0 && nx < a && ny >= 0 && ny < b ) {
				if (check[v[nx][ny] - 65] == 0) {
					check[v[nx][ny] - 65]++;
					dfs(nx, ny, level + 1, res + 1);
					check[v[nx][ny] - 65]--;
					ch = 1;
				}
			
			}
		}
		if (!ch) {
			if (max1 < res)max1 = res; 
		}
		return; 
	}
}
void bfs(int arr[3]) {
	arr[0] = 1; 
}

int main() {
	 cin >> a >> b;
	
	for (int i = 0; i < a; i++) {
		string s; cin >> s;
		v.push_back(s); 
	}
	
	int index = v[0][0] - 65; 
	check[index]++; 
	
	dfs(0, 0, 0, 0 ); 
	cout << max1+1; 
}
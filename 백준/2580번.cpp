#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int pan[9][9]; 
int square[9][9]; 
int row[10][10]; 
int col[10][10]; 
using namespace std; 
void dfs(int l) {
	if (l == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << pan[i][j] << " "; 
			}
			cout << "\n"; 
		}
		exit(0); 
	}
	else {
		int i = l / 9; 
		int j = l % 9; 
		if (pan[i][j] != 0) {
			dfs(l + 1); 
		}
		else {
			for (int k = 1; k <= 9; k++) {
				if (!row[i][k] && !col[j][k] && !square[i / 3 + ((i / 3) * 2 + j / 3)][k]) {
					pan[i][j] = k; 
					row[i][k]++; 
					col[j][k]++; 
					square[i / 3 + ((i / 3) * 2 + j / 3)][k]++;
					dfs(l + 1); 
					pan[i][j] = 0; 
					row[i][k]--;
					col[j][k]--;
					square[i / 3 + ((i / 3) * 2 + j / 3)][k]--;
				}
			}
		}
	}
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {

			cin >> pan[i][j]; 
			if (pan[i][j] != 0) {
				row[i][pan[i][j]] = 1;
				col[j][pan[i][j]] = 1;
				square[i / 3 + ((i / 3) * 2 + j / 3)][pan[i][j]] = 1;
			}
		
		}
	}
	dfs(0); 

}
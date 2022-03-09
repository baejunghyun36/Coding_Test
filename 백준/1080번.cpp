#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std; 
int main() {
	int N, M; cin >> N >> M; 
	vector <string> vec1; 
	vector <string> vec2; 
	for (int i = 0; i < N; i++) {
		 {
			string s; cin >> s; 
			vec1.push_back(s);
		}
	}
	for (int i = 0; i < N; i++) {
		 {
			string s; cin >> s;
			vec2.push_back(s);
		}
	}int cnt = 0; 
	for (int i = 0; i < N - 2; i++) {
		for (int j = 0; j < M - 2; j++) {
			if (vec1[i][j] != vec2[i][j]) {
				cnt++; 
				for (int x = i; x <= i + 2; x++) {
					for (int y = j; y <= j + 2; y++) {
						if (vec1[x][y] == '0') {
							vec1[x][y] = '1';
						}
						else vec1[x][y] = '0'; 
					}
				}
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (vec1[i][j] != vec2[i][j]) {
				cout << "-1";
				return 0; 
			}
		}
	}
	cout << cnt; 
	return 0; 
}
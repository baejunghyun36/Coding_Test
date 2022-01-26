#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std; 
int main() {
	string s; cin >> s; vector <int> vec; 
	int cnt = 0; 
	for (int i = 0; i < s.length() ; i++) {
		if (s[i] == 'X')cnt++; 
		else {
			if (cnt != 0)vec.push_back(cnt);
			cnt = 0; 
		}
		if (i == s.length() - 1) {
			if (cnt != 0)vec.push_back(cnt);
		}
	}
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] % 2 != 0) {
			cout << "-1";
			return 0;
		}
	}int y = 0; 
	for (int i = 0; i < s.length(); i++) {

		if (s[i] == 'X') {
			
			if (vec[y] % 4 == 2) {
				int a = vec[y] / 4;
				for (int i = 0; i < 4 * a; i++) {
					cout << "A";
				}
				cout << "BB";
			}
			else {
				int a = vec[y] / 4; 
				for (int i = 0; i < 4 * a; i++) {
					cout << "A";
				}
			}
			i = i + vec[y] - 1;
			y++; 
		}
		else cout << s[i];
	}
}
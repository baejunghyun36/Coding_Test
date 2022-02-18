#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std; 
int main() {
	string a, b; int cnt = 0; 
	getline(cin, a); getline(cin, b);
	if (a.size() >= b.size()) {
		for (int i = 0; i < a.size() - b.size()+1; i++) {
			int sum = 0;
			if (a[i] == b[0]) {
				for (int j = 0; j < b.size(); j++) {
					if (a[i + j] == b[j]) {
						sum++;
					}
				}
				if (sum == b.size()) {
					cnt++;
					i = i + b.size() - 1;
				}
			}
		}

	}
	cout << cnt;
}
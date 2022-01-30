#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 

int main() {
	pair<int, int> p[50]; 
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> p[i].first>>p[i].second; 
	}
	for (int i = 0; i < n; i++) {
		int cnt = 1; 
		for (int j = 0; j < n; j++) {
			if (i == j)continue; 
			else {
				if (p[i].first < p[j].first && p[i].second < p[j].second) {
					cnt++; 
				}
			}
			
		}
		cout << cnt<<" ";
	}
	return 0;
}
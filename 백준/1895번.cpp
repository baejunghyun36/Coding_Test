#include <iostream>	
#include <vector>
#include <algorithm>	
using namespace std; 
int arr[41][41];
int main() {
	cin.tie(0); 
	ios_base::sync_with_stdio(0);
	int r, c; 
	cin >> r >> c; 
	for (int i= 1; i <= r; i++) {
		for (int j= 1; j <= c; j++) {
			cin >> arr[i][j];
		}
	}
	int cnt = (r - 2) * (c - 2); 
	vector <int> result; 
	int x = 1; int y = 1; 
	while (cnt--) {
		vector <int> chance; 
		for (int i = x; i <= x + 2; i++) {
			for (int j = y; j <= y + 2; j++) {
				chance.push_back(arr[i][j]);
			}
		}
		if (y == c - 2) {
			y = 1; x++;
		}
		else y++; 
		sort(chance.begin(), chance.end());
		result.push_back(chance[4]);
	}
	int T; cin >> T; int f = 0; 
	for (int i = 0; i < result.size(); i++) {
		if (T <= result[i])f++; 
	}
	cout << f; 
	
}
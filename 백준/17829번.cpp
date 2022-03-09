#include <iostream>
#include <algorithm>
#include <vector>
int arr[1024][1024];
using namespace std; 
int prev(int x, int y) {
	vector <int> vec; 
	for (int i = x; i < x + 2; i++) {
		for (int j = y; j < y + 2; j++) {
			vec.push_back(arr[i][j]);
		}
	}
	sort(vec.begin(), vec.end());
	return vec[2];
}
int main() {
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	while (n/2) {
		for (int i = 0; i < n; i += 2) {
			for (int j = 0; j < n; j += 2) {
				arr[i / 2][j / 2] = prev(i, j);
			}
		}
		n /= 2;
	}
	cout<<arr[0][0];
}
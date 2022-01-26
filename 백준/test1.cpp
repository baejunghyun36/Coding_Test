#include <iostream>
using namespace std; 

int main() {
	int n; cin >> n; 

	long long arr[30][30] = { 0 }; 
	for (int i = 1; i <= 29; i++) {
		for (int j = 1; j <= 29; j++) {
			if (i == 1) {
				arr[i][j] = j; 
			}
			else {
				for (int k = 1; k <= j; k++) {
					arr[i][j] += arr[i - 1][k];
				}
			}

		}
	}


	while (n--) {
		int x, y; 
		cin >> x >> y; 

		cout << arr[x][y-x+1] << "\n"; 

	}
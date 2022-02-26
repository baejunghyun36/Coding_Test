#include <iostream>
using namespace std; 
int main() {
	int n; cin >> n; 
	int arr[12] = { 0 };
	arr[1] = 1; arr[2] = 2; arr[3] = 4;
	for (int i = 4; i < 12; i++) {
		arr[i] = arr[i - 3] + arr[i - 1] + arr[i - 2];
	}
	for (int i = 0; i < n; i++) {
		int a; cin >> a; int sum = 0; 
		for (int j = 1; j < a + 1; j++) {
			if (a >= 4) {
				sum = arr[a - 3] + arr[a - 2] + arr[a - 1];
			}
			else {
				sum = arr[a];
			}
		}
		cout << sum << endl;
	}
}
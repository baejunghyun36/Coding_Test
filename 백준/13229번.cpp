#include <iostream>
using namespace std; 
int arr[100000];
int main() {
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int number; cin >> number;
	while (number--) {
		int a, b;
		cin >> a >> b; int sum = 0; 
		for (int i = a; i <= b; i++) {
			sum += arr[i];
		}
		cout << sum << "\n";
	}
	return 0; 
	

}
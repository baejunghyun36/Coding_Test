#include <iostream>
using namespace std; 
int main() {
	int n; cin >> n; 
	int arr[7] = {64,32,16,8,4,2,1};
	int sum = n; int i = 0; int cnt = 0; 
	while (sum != 0) {
		if (arr[i] > sum) {
			i++;
		}
		else {
			sum = sum - arr[i]; cnt++; i++;
		}
	}
	cout << cnt; 
}
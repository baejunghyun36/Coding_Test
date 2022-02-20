#include <iostream>
using namespace std; 
int main() {

	int cnt; 
	cin >> cnt; 
	int arr[100]; 
	for (int i = 0; i < cnt; i++) {
		cin >> arr[i]; 
	}
	int result = 0; 
	int index = cnt - 1; 
	for (int i = index; i > 0; i--) {
		if (arr[i] <= arr[i - 1]) {
			while (arr[i] <= arr[i - 1]) {
				arr[i - 1]--; 
				result++; 
			}
		}
	}
	cout << result; 


}
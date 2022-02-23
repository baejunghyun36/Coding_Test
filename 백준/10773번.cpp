#include <iostream>
using namespace std; 
int main() {
	int arr[100000] = { 0, };
	int n; 
	cin >> n;
	int i;
	int sum = 0; 
	int a;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
		a = i;
		if (arr[i] == 0) {
			while (1) {
				if (arr[i - 1] != 0) {
					arr[i - 1] = 0;
					break;
				}
				else
					i--;
			}
			i = a;
		}
	}
	for (i = 0; i < n; i++) {
		sum += arr[i];
	}
	cout << sum;
}
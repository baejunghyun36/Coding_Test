#include <iostream>
#include <algorithm>
int arr[10001]; 
using namespace std; 
int main() {
	for (int i = 1; i <= 10000; i++) {
		int x = i; 
		int sum = 0; 
		sum += x; 
		while (x) {
			sum += x % 10; 
			x /= 10; 
		}
		arr[sum]++; 
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0)cout << i << "\n";
	}
}
#include <iostream>
using namespace std; 
int arr[1001] = { 0 };
int main() {
	int N, K; cin >> N >> K; 
	for (int i = 1; i <= N; i++) {
		arr[i] = 1;
	}
	int cnt = 0; int sum = 0; int a = 2;
	while (1) {
		if (cnt == K) {
			cout << sum;
			break;
		}
		sum += a; 
		if (sum > N) {
			a++; sum = 0; 
			continue;
		}

		if (arr[sum] != 0) {
			cnt++; arr[sum] = 0; 
			
		}
	}
	
}
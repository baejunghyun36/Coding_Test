#include <iostream>
using namespace std;
long long arr[11]; 
int main() {
	int N; long long K; cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}int cnt = 0; 
	while (N!=0) {
		if (K / arr[N] !=0 ) {
			cnt += K / arr[N]; 
			K %= arr[N]; 
		}
		N--; 
	}
	cout << cnt; 
}
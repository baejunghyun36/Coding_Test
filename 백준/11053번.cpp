#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int result=0; 
int main() {
	int n; cin >> n; 
	int dp[1001]; 
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	fill_n(dp, 1001, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		result = max(dp[i], result);
	}
	cout << result; 
}
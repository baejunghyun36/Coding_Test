#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int arr[100001];
int dp[100001];
using namespace std; 
int main() {

	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}int ans = 0; 
	dp[0] = arr[0];
	ans = dp[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
	}int max = -100000; 
	for (int i = 0; i < n; i++) {
		if (max < dp[i])max = dp[i]; 
	}
	cout << max; 

}
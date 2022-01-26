#include <iostream>
#include<vector>
#include <algorithm>
using namespace std; 
int main() {
	long long n; cin >> n; 
	
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	cout << arr[0] * arr[n - 1];
}



//2 4 8 12    -> 24 
// 4   24 -> 24
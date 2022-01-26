#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		vector <int> arr(10);
		
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}
		sort(arr.begin(), arr.end());
		cout << arr[7] << endl; 
	}
}
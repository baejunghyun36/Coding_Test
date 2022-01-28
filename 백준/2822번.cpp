#include <iostream>
int arr[9]; 
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	vector <int> vec; 
	for (int i = 1; i <= 8; i++) {
		cin >> arr[i];
		vec.push_back(arr[i]);
	}int sum = 0;  vector<int>result; 
	sort(vec.begin(), vec.end()); 
	for (int i = 3; i <= 7; i++) {
		sum += vec[i]; 
		for (int j = 1; j <= 8; j++) {
			if (vec[i] == arr[j]) {
				result.push_back(j); 
			}
		}
	}sort(result.begin(), result.end()); 
	cout << sum<<"\n"; 
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << ' '; 
	}
}
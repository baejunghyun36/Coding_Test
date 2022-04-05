#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int n; cin >> n; 
	vector <int> vec; 	int sum = 1;
	for (int i = 0; i < n; i++) {
		int a; cin >> a; 
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end()); 
	if (vec[0] != 1)cout << "1"; 

	else {
		for (int i = 1; i < n; i++) {
			if (vec[i] > sum + 1)break;
			sum += vec[i];
		}
		cout << sum + 1;
	}
	return 0; 
}
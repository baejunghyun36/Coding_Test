#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int N, L; cin >> N >> L; 
	vector <int> vec; 
	for (int i = 0; i < N; i++) {
		int a; cin >> a; 
		vec.push_back(a); 
	}
	sort(vec.begin(), vec.end()); 
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] <= L) {
			L++; 
		}
	}
	cout << L; 


}
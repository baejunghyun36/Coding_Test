#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std; 
int main() {
	int n; cin >> n; 
	map <string, int> m; 
	for (int i = 0; i < n; i++) {
		string s = ""; 
		cin >> s; 
		m[s]++; 
	}
	int max = -1;
	vector <long long> v; 
	for (auto x : m) {
		if (max < x.second) {
			max = x.second; 
		}
	}
	for (auto x : m) {
		if (x.second == max) {
			v.push_back(stoll(x.first)); 
		}
	}
	sort(v.begin(), v.end()); 
	cout << v[0]; 
	

}
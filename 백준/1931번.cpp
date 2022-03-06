#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std; 
bool abc(pair<int, int> &a, pair<int, int> &b) {
	return a.second < b.second; 
}
int main() {
	int n; cin >> n; 
	vector <pair<int, int>>vec; 
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b; 
		vec.push_back(make_pair(a, b));
	}
	sort(vec.begin(), vec.end()); 
	sort(vec.begin(), vec.end(), abc);

	int cnt = 1; 
	int min = vec[0].second; 
	for (int i = 1; i < vec.size(); i++) {
		if (min <= vec[i].first) {
			min = vec[i].second; cnt++; 
		}
	}
	cout << cnt; 
}
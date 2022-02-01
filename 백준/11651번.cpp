#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
bool asd(pair<int, int> x, pair<int, int> y) {
	if (x.second == y.second) {
		return x.first < y.first;
	}
	else return x.second < y.second;
	
}
int main() {
	int n; cin >> n; 
	vector <pair<int, int>> a(n);
	int i; 
	for (i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}

	stable_sort(a.begin(), a.end(),asd);
	

	for (i = 0; i < n; i++)cout << a[i].first<<' '<<a[i].second<<'\n';
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
bool cmp(pair<int, string>u, pair<int, string> v) {
	return u.first < v.first;
}
int main() {
	int n; cin >> n; 
	vector <pair<int, string>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >>a[i].second;
	}
	stable_sort(a.begin(), a.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << a[i].first << ' ' << a[i].second << '\n';
	}
}
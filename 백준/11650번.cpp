#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool asd(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first) {
		return a.second < b.second
			;
	}
	else
		return a.first < b.first;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n; cin >> n; 
	vector<pair<int, int>> a(n);
	int i; 
	for (i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end(), asd);

	for (i = 0; i < n; i++) {
		cout << a[i].first << " " << a[i].second << '\n';
	}
}
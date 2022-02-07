#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++) {
		int b; cin >> b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++) {
		cout << a[i] << "\n";
	}
}
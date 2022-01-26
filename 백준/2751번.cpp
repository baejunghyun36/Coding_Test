#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n; cin >> n; 
	int i, j; 
	vector <int> main; 
	for (i = 0; i < n; i++) {
		int a; cin >> a; main.push_back(a);
	}
	sort(main.begin(), main.end());
	for (i = 0; i < n; i++) {
		cout << main[i] << '\n';
	}
}
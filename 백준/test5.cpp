#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std; 

bool comp(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	else
		return a.size() < b.size();
}

int main() {
	vector <string> a; 
	int n; cin >> n; int i, j; 
	for (i = 0; i < n; i++) {
		string s; cin >> s; 
		a.push_back(s);
	}
	sort(a.begin(), a.end(),comp);
	cout << a[0] << '\n';
	for (i = 1; i < n; i++) {
		
		if (a[i] == a[i - 1]) {
			continue;
		}

		else
			cout << a[i];

		if (i != n - 1) {
			cout << '\n';
		}
	}


	return 0; 
}
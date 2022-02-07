#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main() {
	int n; cin >> n; vector <int> s;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		s.push_back(a);
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " ";
	}
}
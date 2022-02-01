#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
    cin.tie(0);
ios_base::sync_with_stdio(0);

	int a, b; 
	cin >> a >> b; 
	vector <int > s; 
	for (int i = 0; i < a; i++) {
		int x; cin >> x; 
		s.push_back(x);
	}
	sort(s.begin(), s.end());
	cout << s[b - 1];
}
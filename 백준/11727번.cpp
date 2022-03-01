#include <iostream>
using namespace std; 
#include <vector>
int main() {
	int n; cin >> n; 
	vector<int> s; 
	s.push_back(0);
	s.push_back(1); 
	s.push_back(3);
	for (int i = 3; i <= n; i++) {
		int x = (s[i - 1] + 2 * s[i - 2])%10007;
		s.push_back(x);
	}
	cout << s[n];
}
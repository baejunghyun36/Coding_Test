#include <iostream>
#include <vector>
using namespace std; 
int main() {
	vector <int> s(100000); 
	int n; cin >> n;
	s[1] = 3;
	s[2] = 7
		;
	for (int i= 3; i <= n; i++) {
		s[i] = (s[i - 1] * 2 + s[i - 2])%9901;
	}
	cout << s[n];
	return 0; 
}
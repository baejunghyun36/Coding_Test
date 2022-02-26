#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<long long>s; 
	s.push_back(1);
	s.push_back(1);
	s.push_back(1);
	int n; cin >> n; 
	for (int i = 3; i <100; i++) {
		long long a = s[i - 2] + s[i - 3];
		s.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		int a; cin >> a; 
		cout << s[a - 1] << endl;
	}




}
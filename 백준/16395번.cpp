#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main() {
	int n; cin >> n; int k; cin >> k; 
	vector <int> s(n);
	vector <int> l(n);
	s[0] = 1; s[1] = 1; 
	l[0] = 1; 
	for (int i = 2; i < n; i++) {
		for (int j = 1; j <=i ; j++) {
			l[j]= s[j - 1] + s[j];
		}
		for (int j = 1; j < l.size(); j++) {
			s[j] = l[j];
		}
	}
	cout << s[k - 1];
}
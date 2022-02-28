#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main() {
	int n; cin >> n;

	vector <int> s(n);
	for (int i = 0; i < n; i++) {
		s[i] = i + 1;
	}
	do{
		for (int i = 0; i < n; i++) {
			cout << s[i] << ' ';
		}
		cout << '\n';
	} while (next_permutation(s.begin(), s.end()));

	return 0; 
	
}
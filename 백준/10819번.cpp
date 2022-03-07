#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int n; cin >> n; 
	vector <int> s(n);
	for (int i = 0; i < n; i++) {
		int a; cin >> a; 
		s[i] = a; 
	}
	sort(s.begin(), s.end()); int result = 0;
	do {
		int sum = 0; 
		for (int i = 0; i < s.size()-1; i++) {
			int x = 0;
			x = s[i] - s[i + 1];
			if (x < 0)x = x * (-1);
			sum += x; 
			result = max(result, sum);
		}
	} while (next_permutation(s.begin(), s.end()));
	cout << result; 
}
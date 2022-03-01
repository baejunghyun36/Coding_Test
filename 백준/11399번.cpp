#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main() {
	int n; cin >> n; 
	vector <int> s; 
	for (int i = 0; i < n; i++) {
		int a; cin >> a; 
		s.push_back(a);
	}
	sort(s.begin(), s.end());
	int sum1 = 0; int sum2 = 0; 
	for (int i = 0; i < s.size(); i++) {
		sum1 += s[i];
		sum2 += sum1; 
	}
	cout << sum2; 
}
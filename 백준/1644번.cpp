#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
vector<bool> check; 
int main() {
	vector <int> v;

	int n; cin >> n;
	check.resize(n + 1, 0);
	for (int i = 2; i <= n; i++) {
		if (check[i])continue;
		else {
			v.push_back(i);
			for (int j = i * 2; j <= n; j += i)check[j] = 1;
		}
	}
	int s, e;
	s = e = 0;
	int sum = 0; 
	int cnt = 0;
	while (1) {
		if (sum >= n)sum -= v[s++];
		else if (e == v.size())break;
		else sum += v[e++];
		if (sum == n)cnt++;
	}
	cout << cnt; 
	
}
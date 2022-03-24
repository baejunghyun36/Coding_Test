#include <iostream>
#include <vector>
#include <climits>
using namespace std; 
vector <int> v; 
vector <int> result1; 
vector <int> result2; 
typedef long long ll;
ll l, h, n, q; 
bool check(long long mid) {
	ll cnt = q; 
	for (int i = 0; i < v.size(); i++) {
		cnt += mid / v[i];
	}
	return cnt >= n; 
}
int main() {
	l = 1; h =60000000000;
	cin >> n; cin >> q; 
	for (int i = 0; i < q; i++) {
		int a; cin >> a; 
		v.push_back(a); 
	}
	if (n <= q) {
		cout << n; return 0; 
	}
	ll time = 0; 
	while (l <= h) {
		long long mid = (l + h) / 2;
		if (check(mid)) {
			h = mid - 1;
			time = mid; 
		}
		else l = mid + 1; 
	}
	ll ch = q; 
	for (int i = 0; i < q; i++) {
		ch += (time - 1) / v[i]; 
	}
	for (int i = 0; i < q; i++) {
		if (time % v[i] == 0)ch++; 
		if (ch == n) {
			cout << i + 1 << "\n"; break; 
		}
	}
}
#include <iostream>
#include <algorithm>
using namespace std; 
int a[1001]; 
int d[1001];
int ans;
int main() {
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		d[i] = a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				d[i] = max(d[j] + a[i], d[i]);
			}
		}
		ans = max(d[i], ans);
	}
	cout << ans; 
}
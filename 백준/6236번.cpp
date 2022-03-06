#include <iostream>
#include <vector>
using namespace std; 
int n, m;
vector <int> v; 
bool check(int mid) {	
	int temp = mid; 
	int cnt = 1; 
	for (int i = 0; i < n; i++) {
		if (v[i] <= mid) {
			mid -= v[i]; 
		}
		else {
			mid = temp; 
			cnt++; 
			if (v[i] > mid)return false; 
			else
			mid -= v[i]; 
		}
	}
	return cnt <= m; 
}


int main() {	
	cin >> n >> m; 
	for (int i = 0; i < n; i++) {
		int a; cin >> a; 
		v.push_back(a); 
	}
	int l, h; 
	l = 1; h = 987654321;
	int result = 0; 
	while (l <= h) {
		int mid = (l + h) / 2;
		if (check(mid)) {
			h = mid - 1; 
			result = mid; 
		}
		else {
			l = mid + 1; 
		}
	}
	cout << result; 
}
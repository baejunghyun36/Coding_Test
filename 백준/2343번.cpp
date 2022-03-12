#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int l = 1; int h = INT_MAX; 
int n, m; 
vector <int> v; 
bool check(int mid) {
	for (int i = 0; i < n; i++) {
		if (v[i] > mid)return 0; 
	}
	int sum = 0; 
	int cnt = 1; 
	for (int i = 0; i < n; i++) {
		if (sum+v[i] <= mid) {
			sum+=v[i]; 
		}
		else {
			sum = 0; 
			cnt++; 
			sum += v[i]; 
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
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		int x; int y;
		cin >> x >> y;
		vector <int> a(x);
		vector <int> b(y);
		vector <int> dp(x);
		for (int i = 0; i < x; i++)cin >> a[i];
		for (int i = 0; i < y; i++)cin >> b[i];
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int bi, index, result;
		bi = index = result = 0; 
		for (int i = 0; i < a.size(); i++) {
			index = i;
			while (bi < b.size() && b[bi] < a[i]) {
				bi++;
			}			 	
			if (bi == b.size())break;
			else {
				dp[i] = bi;
			}
		}
		if (index <= a.size() - 1) {
			for (int i = index; i < a.size(); i++) {
				dp[i] = bi;
			}
		}
		for (int i = 0; i < a.size(); i++) {
			result += dp[i];
		}
		cout << result << "\n";
	}
}
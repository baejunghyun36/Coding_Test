#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int n; cin >> n; int k = 0; 
	int i, j; vector<int>result;
	for (i = 0; i < n; i++) {
		int sum = 0;
		int a; cin >> a;
		if (i == 0) {
			result.push_back(a);
			k++;
		}
		else {
			for (j = 0; j < k; j++) {
				if (result[j] == a) {
					j = k - 1;
				}
				else
					sum++;
			}
			if (sum == k) {
				result.push_back(a);

			}
		}
	}
	sort(result.begin(), result.end());
	for (i = 0; i < result.size(); i++) {
		cout << result[result.size()-1-i] << " ";
	}
}
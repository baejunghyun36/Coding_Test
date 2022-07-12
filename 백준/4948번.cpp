#include <queue>
#include <iostream>
#include <algorithm>
using namespace std; 
bool check[123456 * 2+1]; 
int main() {
	for (int i = 2; i <= 123456; i++) {
		if (check[i])continue; 
		else {
			for (int j = i*2; j <= 123456 * 2; j+=i) {
				check[j] = true; 
			}
		}

	}
	while (1) {
		int n; cin >> n;
		if (!n)break; 
		int result = 0; 
		for (int i = n + 1; i <= 2 * n; i++) {
			if (!check[i])result++; 
		}
		cout << result; 
		cout << endl; 
	}
}d
#include <iostream>
using namespace std; 
int main() {
	int n; cin >> n; int cnt = 0; 
	while (n--) {
		int a; cin >> a; 
		bool flag = false; 
		if (a == 1)continue; 
		else if (a > 1) {
			for (int i = 2; i < a; i++) {
				if (a % i == 0) {
					flag = true; break;
				}
			}
		}
		if (!flag)cnt++; 
	}
	cout << cnt; 
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	long long int a, b; cin >> a >> b; long long int x = a; long long int y = b; 
	while (x != y) {
		if (x < y) {
			x += a;

		}
		else
			y += b; 
	}
	cout << x; 
}
#include <iostream>
using namespace std; 
int main() {
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b; 
		int x = a; int y = b;
		while (1) {

			
			if (x < y) {
				x += a;
			}
			else if (x > y) {
				y += b;
			}
			else {
				cout << x<<endl;
				break; 
			}
		}
	}
	
}
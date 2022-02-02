#include <iostream>
using namespace std; 
int main() {
	int x; cin >> x; int i = 2;
	while (1) {
		
		if (x % i == 0) {
			x = x / i;
			cout << i<<"\n";
		}
		else i++; 

		
		if (x == 1)break; 
	}
}
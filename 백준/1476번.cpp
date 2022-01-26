#include <iostream>
using namespace std;
int main() {
	int A, B, C; cin >> A >> B >> C;
	int a, b, c;
	a = 1, b = 1, c = 1;
	int cnt = 1;
	while (1) {



		if (A == a && B == b && C == c) {
			cout << cnt; break;
		}
		else {
			a++; b++; c++; cnt++;
			if (a == 16)a = 1;
			if (b == 29)b = 1;
			if (c == 20)c = 1;

		}



	}
}
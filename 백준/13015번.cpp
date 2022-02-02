#include <iostream>
using namespace std; 
int main() {
	int n; cin >> n;
	int line = 2 * n - 1;
	int blank1 = n - 2;
	int blank2 = (n - 2) * 2 + 1;
	int i, j;
	for (i = 0; i < n; i++) {
		if (i == 0) {
			for (j = 0; j < n; j++) {
				cout << "*";
			}
			for (j = 0; j < blank2; j++) {
				cout << " ";
			}
			for (j = 0; j < n; j++) {
				cout << "*";
			}
			blank2 = blank2 - 2;
		}
		else if (i < n) {
			if (i == n - 1) {
				for (j = 0; j < i; j++) {
					cout << " ";
				}
				cout << "*";
				for (j = 0; j < blank1; j++) {
					cout << " ";
				}
				cout << "*";
				for (j = 0; j < blank1; j++) {
					cout << " ";
				}
				cout << "*";
			}
			else {
				for (j = 0; j < i; j++) {
					cout << " ";
				}
				for (j = 0; j < blank1 + 2; j++) {
					if (j == 0 || j == blank1 + 1) {
						cout << "*";
					}
					else
						cout << ' ';
				}
				for (j = 0; j < blank2; j++) {
					cout << ' ';
				}
				for (j = 0; j < blank1 + 2; j++) {
					if (j == 0 || j == blank1 + 1) {
						cout << "*";
					}
					else
						cout << ' ';
				}
				blank2 = blank2 - 2;
			}
		}
		cout << endl;
	
	}
	blank2 = blank2 + 2;   int blank3 = n-1;
	for (i = n; i < line; i++) { if (i == line-1) {
			for (j = 0; j < n; j++) {
				cout << "*";
			}
			for (j = 0; j < blank2; j++) {
				cout << " ";
			}
			for (j = 0; j < n; j++) {
				cout << "*";
			}
			blank2 = blank2 - 2;
		}
		else{	for (j = 0; j < blank3 - 1; j++) {
				cout << " ";
			}
			cout << "*";
			for (j = 0; j < blank1; j++) {
				cout << " ";
			}
			cout << "*";
			for (j = 0; j < blank2; j++) {
				cout << " ";
			}
			cout << "*";
			for (j = 0; j < blank1; j++) {
				cout << " ";
			}
			cout << "*";
			blank3--;
			blank2 = blank2 + 2;
			cout << endl;
		}
	}



		
}
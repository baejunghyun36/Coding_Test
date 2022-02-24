#include <iostream>
using namespace std; 
int main() {
	int n; 
	cin >> n; 
	int l = 1;
	int m = 1;
	int i, j,q; 
	int line = 5 + 4 * (n - 2);
	if (n == 1) {
		cout << "*";
	}
	else {

		for (i = 0; i < line; i++) {
			if (i < line / 2 + 1) {
				if (i == 0 || i == line - 1) {
					for (j = 0; j < line; j++) {
						cout << "*";
					}
					cout << "\n";

				}

				else if (i % 2 == 1) {
					for (j = 0; j < i / 2 + 1; j++) {
						cout << "* ";
					}
					for (j = 0; j < line - 3 - (i / 2) * 4; j++) {
						cout << " ";
					}
					for (j = 0; j < i / 2 + 1; j++) {
						cout << "* ";
					}
					cout << endl;


				}
				else if (i % 2 == 0 && (i != 0 || i != line - 1)) {
					for (j = 0; j < i / 2; j++) {
						cout << "* ";
					}
					for (j = 0; j < line - (i / 2) * 4; j++) {
						cout << "*";
					}
					for (j = 0; j < i / 2; j++) {
						cout << " *";
					}
					cout << endl;
				}

			}
			else {
		
				if (i % 2 == 0) {
					for (q = 0; q < (line - i) / 2; q++)
						cout << "* ";
			
					for (q = 0; q < 4*m+1; q++) {
						cout << "*";
					}
					for (q = 0; q < (line - i) / 2; q++)
						cout << " *";
					cout << endl;
					m++;
					
				}
				else {
					for (q = 0; q < (line - i) / 2;q++ ) {
						cout << "* ";
					}
					for (q = 0;q<4*l-2; q++) {
						cout << " ";
					}
					for (q = 0; q < (line - i) / 2; q++) {
						cout << "* ";
					}
					l++;
					cout << endl;
				}
					
				
			}
		}
			
	}
			
}




/*else{
	if (i == line / 2) {
		for (j = 0; j < line / 2 + 1; j++) {
			cout << "* ";
		}
	}*/
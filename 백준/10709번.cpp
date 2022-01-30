#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int a, b; cin >> a >> b;  int arr[100][100] = { 0};
	vector <string> s(a);

	for (int i = 0; i < a; i++) {
		string a; cin >> a; 
		s[i] = a;
		
	}

	for (int i = 0; i < a; i++) {
		int number = 1;
		int x = 0;
		for (int j = 0; j < b; j++) {
			if (s[i][j] == 'c') {
				arr[i][j] = 0; 
				x = 1; number = 1; 
			}
			else {
				if (x == 1 && s[i][j] == '.') {
					arr[i][j] = number; number++; 
				}
			}
			if (x == 0) {
				arr[i][j] = -1; 
			}
		}
	
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl; 
	}
}
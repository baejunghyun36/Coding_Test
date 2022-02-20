#include <iostream>
#include<string>
#include<vector>
using namespace std; 
int main() {
	int m, n; 
	cin >> m>> n;
	int arr[5] = { 0 };
	int a = 5 * m + 1;
	int number = 0;
	vector<string>s(a);
	int i; 
	for (i = 0; i < a; i++) {
		cin >> s[i];
	}
	for (i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < 5; k++) {
				if (s[1 + 5*j+k][1+i*5] == '*')
					number++;
			}
			arr[number]++;
			number = 0;
			
		}
		
	}
	for (i = 0; i < 5; i++) {
		if (i == 4) {
			cout << arr[i];
		}
		else
			cout << arr[i] << " ";
	}
}
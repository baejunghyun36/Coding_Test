#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
int arr[10]; 
int main() {
	string s; cin >> s; int sum = 0; int cnt = 0; 
	for (int i = 0; i < s.length(); i++) {
		int a = s[i] - '0'; 
		arr[a]++; 
		sum += a; 
		if (s[i] == '0')cnt++; 
	}
	if (cnt == 0 || sum % 3 != 0) {
		cout << "-1";
		return 0;
	}
	else {
		for (int i = 9; i >= 0; i--) {
			for (int j = 0; j < arr[i]; j++) {
				cout << i; 
			}
		}
		return 0;
	}
	
}
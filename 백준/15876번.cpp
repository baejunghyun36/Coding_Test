#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	vector <string> s; 
	s.push_back("0");
	int n; cin >> n; int z; cin >> z; 
	for (int i = 1; i < 500; i++) {
		int  j = i; int k = 0;  string x="";
		while (j != 0) {
			k = j % 2; 
			j = j / 2;
			char c = k + 48; 
			x += c; 
		}
		string y = ""; 
		for (int i = x.length() - 1; i >= 0; i--) {
			y += x[i];
		}
		s.push_back(y); 
	}
	char arr[100000]=""; int k = 0; 
	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < s[i].length(); j++) {
			arr[k] = s[i][j];
			k++;
		}
	}

	
	int l = 5; 
	while (l--) {
		cout << arr[z-1]<<" "; 
		z = z + n; 
	}
}
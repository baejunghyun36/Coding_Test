#include <string>
#include <iostream>
using namespace std; 
int result(string str) {
	int x = atoi(str.c_str()); 
	return x; 
}
/* 55 - 50 */
int main() {
	string s; cin >> s;  int Result = 0; int Result2 = 0; 
	int _location = 0; 
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == '-') {
			_location = i; break;
		}
	}
	int p = 0; 
	if (_location == 0) {
		string str = "";
		for (int i = 0; i < s.length(); i++) {
			if (i == 0) {
				if (s[i] == '-') {
					p = 1; 
				}
			}
		

			if (s[i] == '+' || s[i] == '-'&&i!=0) {
				
				Result += result(str);
				if (p == 1) {
					Result *= -1; 
					p = 0; 
				}
				str = "";
			}
			else str += s[i];
			if (i == s.length() - 1) {
				Result += result(str);

			}
		}
		cout << Result; 
		return 0;
	}
	else {
		string str = "";
		for (int i = 0; i <= _location; i++) {
			if (i == 0) {
				if (s[i] == '-') {
					p = 1; 
				}
			}
			if (s[i] == '+' || s[i] == '-'&&i!=0) {
				Result+=result(str);
				if (p == 1) {
					Result *= -1; 
					p = 0; 
				}
				str = "";
			}
			else {
				if (s[i] != '-')
					str += s[i];
			}
		}
		for (int i = _location+1; i < s.length(); i++) {
			if (s[i] == '+' || s[i] == '-') {
				Result2 += result(str);
				str = "";
			}
			else str += s[i];
			if (i == s.length() - 1) {
				Result2 += result(str);
			}
		}
	}
	cout << Result - Result2;
	return 0; 

}
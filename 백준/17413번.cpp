#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; getline(cin, s);
	int size = s.length(); int a = 0; string ex; string b; string result; 
	for (int i = 0; i < size; i++) {
		if (s[i] == '<') {
			result += '<';
			int k = 1; int n = 1; 
			while (n) {
				if (s[i + k] == '>') {
					result += '>';
					i = i + k; break;
				}
				else {
					result += s[i + k]; k++;
				}
			}
		}
		else if (s[i] == ' ') {
			result += ' ';
		}
		else {
			b += s[i]; 
			if (s[i + 1] == ' ' || s[i + 1] == '<' || i == size - 1) {
				for (int j = 0; j < b.length()/2; j++) {
					char c = ' '; 
					c = b[j]; 
					b[j] = b[b.length() - 1 - j];
					b[b.length() - 1 - j] = c; 
				}
		
				result += b; 
				b = "";
			}
		}
	}


	cout << result; 
}
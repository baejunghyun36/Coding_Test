#include <iostream>
#include <string>
using namespace std; 
int main() {
	string s;
	int i; 
	int sum = 0; 
	cin >> s;
	for (i = 0; i < s.size(); i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=' || s[i + 1] == '-') {
				sum++;
				i++;
			}
			else
				sum++;
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == '-') {
				sum++;
				i++;
			}
			else if (s[i] + 1 == 'z') {
				if (s[i + 2] == '=') {
					sum++;
					i = i + 2;
				}
				else
					sum = sum + 2;
			}
			else
				sum++;
		}
		else if (s[i] == 'l') {
			if (s[i + 1] == 'j') {
				sum++;
				i++;
			}
			else
				sum++;
		}
		else if (s[i] == 'n') {
			if (s[i + 1] == 'j') {
				sum++;
				i++;
			}
			else
				sum++;
		}
		else if (s[i] == 's') {
			if (s[i + 1] == '=') {
				sum++;
				i++;
			}
			else
				sum++;
		}
		else if (s[i] == 'z') {
			if (s[i + 1] == '=') {
				if (s[i - 1] != 'd') {
					sum++;
					i++;
				}
				else
					i++;
				
			}
			else
				sum++;
		}
		else
			sum++;
	}
	cout << sum;
}
#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
	int n; cin >> n; 
	while (n--) {
		string s; cin >> s; stack <char> stk;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') {
				stk.push(s[i]);
			}
			else if (s[i] == ')') {
				if (stk.empty()) {
					cout << "NO" << "\n";
					break;
				}
				else {
					stk.pop();
				}
			}
			if (i == s.length() - 1) {
				if (stk.empty())
					cout << "YES" << "\n";
				else
					cout << "NO" << "\n";
			}
		}
	}
}
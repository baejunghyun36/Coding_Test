#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std; 
int main() {
	string s; cin >> s; stack <char> stk; 
	stack <char> exa; 
	for (int i = 0; i<s.length(); i++) {
		stk.push(s[i]); 
	}
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		char a; cin >> a; 
		if (a == 'P') {
			char word; cin >> word; 
			stk.push(word); 
		}
		else if (a == 'L') {
			if (stk.empty())continue; 
			else {
				exa.push(stk.top());
				stk.pop();
			}
		}
		else if (a == 'D') {
			if (exa.empty())continue; 
			else {
				stk.push(exa.top());
				exa.pop();
			}
	
		}
		else {
			if (stk.empty()) {
				continue; 
			}
			else {
				stk.pop(); 
			}
		}
	}
	while (!exa.empty()) {
		stk.push(exa.top());
		exa.pop();
	}string ax; 
	while (!stk.empty()) {
		ax += stk.top(); 
		stk.pop(); 
	}
	for (int i = ax.length() - 1; i >= 0; i--) {
		cout << ax[i]; 
	}
}
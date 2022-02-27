#include <iostream>
#include <stack>
#include <string>
using namespace std; 
int main() {
	string s; cin >> s; int cnt = 0; stack <char> stk; int result = 0; 
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			stk.push(s[i]); 
			
		}
		else {
			
			stk.pop(); 
			if (s[i - 1] == '(')result += stk.size();
			else result++;
			
			
		}
	}
	cout << result; 
}
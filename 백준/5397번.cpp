#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std; 
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n; 
	for(int i=0; i<n; i++){
		string s; cin >> s;
		stack <char> dell; 
		stack <char> stk; 
	
		for (int i = 0; i < s.length(); i++) {

			if (s[i] == '<') {
				if (!stk.empty())
					 {

					dell.push(stk.top());
					stk.pop();
				}
			}
			else if (s[i] == '>') {
				if (!dell.empty()) {
					stk.push(dell.top());
					dell.pop();
				}
			}
			else if (s[i] == '-') {
				if (!stk.empty()) {
					stk.pop();
				}
				
			}
			else {
				stk.push(s[i]);
			}
			
		}
		while (!dell.empty()) {
			stk.push(dell.top());
			dell.pop();
		}

	
			
		string y; 
		while (!stk.empty()) {
			y+= stk.top();
			stk.pop();
		}
		reverse(y.begin(), y.end());
		cout << y << "\n";

	}
	return 0; 
	
	
}
#include <iostream>
#include <stack>
int arr[11]; 
using namespace std; 
int main() {
	int n; cin >> n; 
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];; 
	}
	stack <int> stk1; 
	stack <int> stk2;
	for (int i = n; i >= 1; i--) {
		if (stk1.empty())stk1.push(i); 

		else {
			int a = arr[i]-1;
			while (stk1.size()!=arr[i]) {
				stk2.push(stk1.top()); 
				stk1.pop();
			}
			stk1.push(i); 
			while (!stk2.empty()) {
				stk1.push(stk2.top()); 
				stk2.pop(); 
			}
			
		}
	}
	while (!stk1.empty()) {
		stk2.push(stk1.top());
		stk1.pop(); 
	}
	while (!stk2.empty()) {
		cout << stk2.top() << " ";
		stk2.pop();
	}
}
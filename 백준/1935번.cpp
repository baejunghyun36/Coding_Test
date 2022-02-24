#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std; 
int arr[27]; 
int brr[27];
double value = 0; 
double result(double a, double b, char c) {
	if (c == '-')return a - b;
	else if (c == '+')return a + b;
	else if (c == '*')return a * b;
	else {
		double y = static_cast <double> (a / b); 
		return y; 
	}
}
int main() {
	int n; cin >> n; 
	string s; cin >> s; stack <double> stk; 
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			int x = s[i] - 64; 
			stk.push(arr[x]);
		}
		else {
			char c = s[i];
			double b = stk.top();
			stk.pop();
			double a = stk.top();
			stk.pop();
			value = result(a, b, c);
			stk.push(value); 
		}

	}
	cout << fixed; 
	cout.precision(2); 
	cout << stk.top();

}
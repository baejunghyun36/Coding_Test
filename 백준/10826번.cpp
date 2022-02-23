#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std; 
string str[100001]; 
void result(int i) {
	string x, y;
	x = str[i - 2]; 
	y = str[i - 1]; 

	reverse(x.begin(), x.end()); 
	reverse(y.begin(), y.end()); 
	x += '0';
	y += '0';
	if (x.length() < y.length()) {
		while (x.length() < y.length()) {
			x += '0';
		}
	}int cnt = 0; string exe;
	for (int j = 0; j < x.length(); j++) {
		int X, Y; 
		X = x[j] - '0'; 
		Y = y[j] - '0'; int rest; 
		int sum = X + Y+cnt; 
		if (sum > 9) {
			cnt = 1; 
	
		}
		else {
			cnt = 0; 
		}
		rest = sum % 10;
		char c = rest + '0'; 
		exe += c;

	}
	reverse(exe.begin(), exe.end());
	if (exe[0] != '0') {
		str[i] += exe[0]; 
	}
	for (int j = 1; j < exe.length(); j++) {
		str[i] += exe[j];
	}


}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n; 
	str[0] = "0"; 
	str[1] = "1"; 
	for (int i = 2; i <= n; i++) {
		result(i); 
	}
	if (n == 0)cout << "0"; 
	if (str[n][0]!='0') {
		cout << str[n][0];
	}
	for (int i = 1; i < str[n].length(); i++) {
		cout << str[n][i];
	}
	return 0; 
}
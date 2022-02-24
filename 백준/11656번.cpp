#include <iostream>
#include <algorithm>
using namespace std; 
int main() {
	string s; 
	string temp[1000];
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		temp[i] = s.substr(i, s.size());
	}

	sort(temp, temp + s.size());
	for (int i = 0; i < s.size(); i++) {
		cout << temp[i] << endl;
	}
}
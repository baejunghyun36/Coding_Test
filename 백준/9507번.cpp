#include <iostream>
#include <vector>
using namespace std; 
int main() {
	int x; cin >> x; 
	vector <long long> s(68);
	s[0] = 1;
	s[1] = 1;
	s[2] = 2;
	s[3] = 4;
	for (int i = 4; i <= 67; i++) {
		s[i] = s[i - 1] + s[i - 2] + s[i - 3] + s[i - 4];
	}
	while (x--) {
		int n; cin >> n; 
	
		cout << s[n] << endl;
	}

}
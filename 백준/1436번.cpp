#include <iostream>
#include <string>
using namespace std; 
int main() {
	int x = 665; 

	int cnt = 0; 
	int nuum = 0; 
	string s = ""; 
	cin >> nuum; 
	while (1) {
		x++; 
		s = to_string(x); 
		
		if (s.find("666")!=-1) {
			cnt++; 
		}
		if (cnt == nuum)break; 
	}
	cout << s; 
}
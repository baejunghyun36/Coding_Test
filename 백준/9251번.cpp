#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std; 

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	string a, b; 
	cin >> a >> b; 
	a = " " + a; 
	b = " " + b; 
	int n = a.size(); 
	int m = b.size(); 
	vector <vector<int>>dy(n, vector<int>(m)); 
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (a[i] == b[j])dy[i][j] = dy[i - 1][j - 1]+1; 
			else dy[i][j] = max(dy[i - 1][j], dy[i][j - 1]);
		}
	}
	cout << dy[n-1][m-1]; 


	return 0; 
}
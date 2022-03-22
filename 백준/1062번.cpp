#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int n, m; 
vector <int> v; 
int result = 0; 
void dfs(int alpa, int level, int index) {
	if (m == level) {
		int cnt = 0; 		
		for (int i = 0; i < n; i++) {		
			if ((alpa & v[i]) == v[i])cnt++; 
		}
		result = max(result, cnt); 
	}
	else {
		int x = 0; 
		for (int i = index; i < 26; i++) {	
			x = 1 << i; 
			if ((alpa & (x)))continue; 
			else {
				alpa |= x; 				
				dfs(alpa, level + 1, i); 
				alpa ^= x; 
			}
		}
	}
	return;
}
int main() {
	//a,n,t,i,c
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;	
	int alpa=0;
	alpa |= (1 << ('a' - 'a')); 
	alpa |= (1 << ('n' - 'a')); 
	alpa |= (1 << ('t' - 'a')); 
	alpa |= (1 << ('i' - 'a')); 
	alpa |= (1 << ('c' - 'a')); 
	vector <int> v1(n, 0); 
	for (int i = 0; i < n; i++) {
		string s = ""; 
		cin >> s; 
		for (int j = 0; j < s.size(); j++) {
			v1[i] |= 1 << (s[j] - 'a'); 
		}
	}
	if (m < 5) {
		cout << 0; return 0;
	}
	m = m - 5;
	v = v1; 
	dfs(alpa, 0, 0);
	cout << result; 
}
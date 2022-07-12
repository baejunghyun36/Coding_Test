#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std; 
int main() {
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0); 
	int n; cin >> n; 
	vector <int> v(n); 
	vector <int> re_v; 
	for (int i = 0; i < n; i++) cin >> v[i]; 	
	re_v = v; 
	sort(re_v.begin(), re_v.end()); 
	unordered_map <int, int> m;
	int prev = re_v[0];
	int cnt = 0; 
	m[re_v[0]] = cnt; 
	for (int i = 1; i < re_v.size(); i++) {
		if (prev != re_v[i])m[re_v[i]] = ++cnt;
		prev = re_v[i]; 
	}
	for (int i = 0; i < n; i++) {
		cout << m[v[i]] << " "; 
	}
}
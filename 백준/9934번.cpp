#include <iostream>
#include <vector>
using namespace std; 
int n; 
vector <vector<int>> v;
void dfs(int s, int e, int level, vector<int>& data) {
	if (level==n) return; 	
	int mid = (s + e) / 2;
	dfs(s, mid - 1, level + 1, data);//왼쪽
	v[level].push_back(data[mid]); 
	dfs(mid + 1, e, level + 1, data); //오른쪽
}

int main() {
	cin >> n;
	vector <int> data((1 << n) - 1); 
	int i; 
	for (i = 0; i < (1 << n) - 1; i++){
		cin >> data[i]; 
	}
	int s = 0; 
	int e = --i; 
	v.resize(n); 
	dfs(s, e, 0, data);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << " ";
		}cout << endl; 
	}
}
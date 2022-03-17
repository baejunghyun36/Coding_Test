#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>	
using namespace std; 
vector <int> v[51];
queue <int> q; 
bool erase[51]; 
int result; 
void leaf(int root) {

	if (!v[root].size() && !erase[root])
	{
		result++;
		return; 
	}
	else {

	}




}
int main() {
	int n; cin >> n; 
	int root;

	for (int i = 0; i < n; i++) {
		int num; cin >> num; 
		if (num == -1) {
			root = i; 
			continue; 
		}
		v[num].push_back(i); 
	}
	int del; cin >> del; 
	q.push(del); 
	while (!q.empty()) {
		int x = q.front(); 
		erase[x] = true; 
		q.pop(); 
		for (int i = 0; i < v[x].size(); i++) {
			q.push(v[x][i]); 
		}

	}
	for (int i = 0; i < n; i++) {
		if (!erase[i]) {
			int cnt = 0; 
			for (int j = 0; j < v[i].size(); j++) {
				if (erase[v[i][j]])cnt++; 
			}
			if (cnt == v[i].size())result++; 
		}
	}
	
	cout << result;

	return 0;

}
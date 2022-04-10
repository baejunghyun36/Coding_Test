#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
vector <int> parent; 

int find(int x) {
	if (parent[x] == x)return x;
	else return parent[x] = find(parent[x]);
}
void uni(int x, int y) {
	x = find(x); 
	y = find(y); 
	parent[y] = x; 
}
bool sameparent(int x, int y) {
	x = find(x); 
	y = find(y); 
	if (x == y)return true;
	else return false; 
}
int main() {
	ios::sync_with_stdio(false); 
	cin.tie(0); cout.tie(0); 
	int vertex, m; cin >> vertex >> m; 
    parent.resize(vertex + 1, 0); 
	for (int i = 1; i <= vertex; i++)parent[i] = i; 
	while (m--) {
		int a, b, c; 
		cin >> a >> b >> c; 
		if (!a) {
			//union
			if (sameparent(b, c) == false) {
				uni(b, c); 			
			}		
		}
		else {
			//check
			if (sameparent(b, c) == false) cout << "NO\n";			
			else cout << "YES\n";		
		}
	}
}
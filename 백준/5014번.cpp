#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std; 
int f, s, g, u, d; 
//f 건물 높이, s 현재위지, g 목적지 , u up , d down 
int main() {
	cin >> f >> s >> g >> u >> d; 
	queue <int> q; 
	vector <bool> visited(f + 1, false); 
	q.push(s); 
	int cnt=0; 
	visited[s] = true; 
	while (!q.empty()) {
		int n = q.size(); 
		while (n--) {
			int x = q.front(); 
			if (x == g) {
				cout << cnt;
				return 0;
			}
			q.pop();
			
			int up = u + x; 
			int down = x - d; 
			if (up <= f && !visited[up] ) {
				q.push(up);
				visited[up] = true; 
			}
			if (down >= 1 && !visited[down]) {
				q.push(down); 
				visited[down] = true; 
			}
		}
		cnt++;
	}
	cout << "use the stairs"; 
}
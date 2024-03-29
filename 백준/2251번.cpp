#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std; 
set <int> s; 
int A,B,C;
int check = 0; 
int visited[200][200][200]; 
void dfs(int a, int b, int c, int start) {
	
	if (!a) s.insert(c); 	
	if (visited[a][b][c])return; 
	visited[a][b][c] = 1;

	//물통 A에서 물통 B로 옮길 때
	if (b + a > B) 	dfs(a - (B - b), B, c, 2);
	else dfs(0, b + a, c, 2);
	//물통 A에서 물통 C로 옮길 때
	if (c + a > C) 	dfs(a - (C - c), b, C, 3);
	else dfs(0, b, c + a, 3);

	//물통 B에서 물통 A로 옮길 때
	if (b + a > A) 	dfs(A, b - (A - a), c, 1);
	else dfs(a + b, 0, c, 2);
	
	//물통 B에서 물통 C로 옮길 때
	if (b + c > C) 	dfs(a, b - (C - c), C, 3);
	else dfs(a, 0, c + b, 1);

	//물통 C에서 물통 A로 옮길 때
	if (a + c > A) 	dfs(A, b, c - (A - a), 1);
	else dfs(a + c, b, 0, 1);
	//물통 C에서 물통 B로 옮길 때
	if (b + c > B) 	dfs(a, B, c - (B - b), 2);
	else dfs(a, b + c, 0, 2); 
	

}

int main() {

	cin >> A >> B >> C; 
	dfs(0, 0, C, 3 ); 
	for (auto x : s)cout << x << " "; 
	return 0; 
}
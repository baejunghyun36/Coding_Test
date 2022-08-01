#include <iostream>
#include <algorithm> 
using namespace std; 
long long a, b; 
long long answer = 987654321; 
void dfs(long long cur, long long cnt) {
	if (cur == b) {
		answer = min(answer, cnt); 
		return; 
	}
	if (cur > b) {
		return; 
	}
	dfs(cur * 2, cnt + 1);
	dfs(cur * 10 + 1,cnt + 1);
	return; 
}

int main() {
	cin >> a >> b; 
	dfs(a,1); 
	if (answer == 987654321)cout << -1;
	else cout << answer; 	
}
#include <iostream>
#include <queue>
#include <string>
using namespace std; 
queue <int> que; 
void result(string s, int n) {
	if (s == "push") {
		int a; cin >> a; 
		que.push(a); 
	 }
	else if (s == "front") {
		if (que.empty()) {
			cout << "-1";

			if (n != 0)cout << "\n";

		}
		else {
			cout << que.front();

			if (n != 0)cout << "\n";
		}
		
	}
	else if (s == "back") {
		if (que.empty()) {
			cout << "-1"; 
		}
		else {
			cout << que.back();
			
		}

		if (n != 0)cout << "\n";

	}
	else if (s == "size") {
		cout << que.size(); 

		if (n != 0)cout << "\n";
	}
	else if (s == "pop") {
		if (que.empty()) {
			cout << "-1";
		}
		else {
			cout << que.front();
			que.pop();
		}

		if (n != 0)cout << "\n";
	}
	else {
		cout << que.empty();

		if (n != 0)cout << "\n";
	}
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	
	int n; 
	cin >> n; 
	while (n--) {
		string s; cin >> s; 
		result(s,n); 

	}
}
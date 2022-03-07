#include <iostream>
#include <queue>
using namespace std; 
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	priority_queue <long long> s; 
	int N; cin >> N; 
	for (int i = 0; i < N; i++) {
		int a; cin >> a; 
		if(!a){
			if (s.empty()) {
				cout << a;
				cout << '\n';
			}
			else if (!s.empty()) {
				cout << s.top();
				cout << '\n';
				s.pop();
			}
		
		}
		else {
			s.push(a);
		}
		
	}
}
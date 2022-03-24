#include <iostream>
#include <queue>
#include <cmath>
using namespace std; 

priority_queue <int, vector<int>, greater<int>> q1; //양수 
priority_queue <int> q2;//음수

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		int x; cin >> x; 
		if (x > 0)q1.push(x);
		else if (x < 0)q2.push(x); 
		else {
			if (q1.empty() && q2.empty())cout << 0 << endl; 
			else if (q1.empty() && !q2.empty()) {
				cout << q2.top() << endl;
				q2.pop(); 
			}
			else if (!q1.empty() && q2.empty()) {
				cout << q1.top() << endl;
				q1.pop(); 
			}
			else {
				int b = q1.top();
				int a = abs(q2.top());
				if (a <= b) { 
					cout << q2.top() << endl;
					q2.pop(); 
				}
				else { 
					cout << q1.top() << endl;
					q1.pop(); 
				}
			}
		}
	}
}
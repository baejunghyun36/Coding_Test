#include <iostream>
#include <queue>
using namespace std; 
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);


	int n; cin >> n;
	priority_queue<int, vector<int>, greater<int> > pq;
	for (int i = 0; i < n; i++) {
		int a; cin >> a; 
		if (a == 0) {
			if (!pq.size()) {
				cout << "0" << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(a);
		}
	}

	
}
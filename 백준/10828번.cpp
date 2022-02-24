#include <iostream>
#include <string>
#include <vector>
using namespace std; 
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n; cin >> n; 
	vector <int> push; int cnt = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s; 
		if (s == "push") {
			int a; cin >> a;
			push.push_back(a);
			cnt++;
		}
		else if (s == "top") {
			if (cnt == 0) {
				cout << "-1";
			}
			else
			cout << push[push.size() - 1] ;		cout << "\n";

		}
		else if (s == "size") {

			cout << cnt;
			cout << "\n";
		}
		else if (s == "empty") {
			if (cnt == 0) {
				cout << "1";
			}
			else cout << "0";
			cout << "\n";
		}
		else if (s == "pop") {
			if (cnt == 0)cout << "-1";
			else {
				cout << push[push.size() - 1];
				push.pop_back();
				cnt--;
			}

			cout << "\n";
		}


	}

}
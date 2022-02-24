#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n; cin >> n; int number = 0; 
	vector <int> push; int cnt = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s == "push") {
			int a; cin >> a;
			push.push_back(a);
			cnt++;
		}
		else if (s == "front") {
			if (cnt == 0) {
				cout << "-1";
			}
			else
				cout << push[number];

		}
		else if (s == "back") {
			if (cnt == 0) {
				cout << "-1";

			}
			else {
				cout << push[push.size() - 1];
			}

		}
		else if (s == "size") {

			cout << cnt;

		}
		else if (s == "empty") {
			if (cnt == 0) {
				cout << "1";
			}
			else cout << "0";

		}
		else if (s == "pop") {
			if (cnt == 0)cout << "-1";
			else {
				cout << push[number];
				number++;
				
				cnt--;
			}


		}
		if (i != n - 1 && s != "push") {
			cout << "\n";

		}
	}

}


#include <iostream>
#include <deque>
#include <string>
using namespace std; 

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n; cin >> n; int cnt = 0; 
	int i; deque <int> aim;
	for (i = 0; i < n; i++) {
		string s; cin >> s; 
		if (s == "push_front") {
			int a; cin >> a; aim.push_front(a); cnt++;
		}
		else if (s == "push_back") {
			int a; cin >> a; aim.push_back(a); cnt++;
		}
		else if (s == "pop_front") {
			if (cnt == 0) cout << "-1";
			else { cout << aim[0]; aim.pop_front(); cnt--; }
		}
		else if (s == "pop_back") {
			if (cnt == 0)cout << "-1";
			else { cout << aim[aim.size()-1]; aim.pop_back(); cnt--;
			}
		}
		else if (s == "size")cout << aim.size();
		else if (s == "empty") cout << aim.empty();
		else if (s == "front") {
			if (cnt == 0)cout << "-1";
			else { cout << aim[0]; }
		}
		else if (s == "back") {
			if (cnt == 0)cout << "-1";
			else cout << aim[aim.size() - 1];
		}
		if (i != n - 1&&s!="push_back"&&s!="push_front") {
			cout << "\n";
		}
	}
}
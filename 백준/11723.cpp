#include <iostream>
#include <algorithm>
#include <vector>
int arr[21] = { 0, };
using namespace std; 
void carr(string s) {

	if (s == "add") {
		int b; cin >> b; 
		if (arr[b] == 0) {
			arr[b]++;
		}
	}
	else if (s == "check") {
		int b; cin >> b;
		if (arr[b] == 1)cout << "1" << '\n';
		else cout << "0" << "\n";
	}
	else if (s == "remove") {
		int b; cin >> b;
		if (arr[b] == 1)arr[b]--;
	}
	else if (s == "toggle") {
		int b; cin >> b;
		if (arr[b] == 1)arr[b]--;
		else arr[b]++; 
	}
	else if (s == "all") {
		for (int i = 1; i <= 20; i++) {
			arr[i] = 1; 
		}
	}
	else {
		for (int i = 1; i <= 20; i++) {
			arr[i] = 0;
		}
	}
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n; cin >> n; 
	while (n--) {

		string a; cin >> a; 
	    carr(a);



	}

}
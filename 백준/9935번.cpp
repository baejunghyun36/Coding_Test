#include <iostream>
#include <string>
using namespace std;
string s1, s2, result;
int main() {
	cin >> s1 >> s2;
	int pos = 0;
	for (int i = 0; i < s1.size(); i++) {
		result += s1[i];
		if (result.size() >= s2.size()) {
			if (result.substr(result.size() - s2.size(), s2.size()) == s2) {
				result.erase(result.end() - s2.size(), result.end());

			}
		}
	}
	if (result.size())cout << result;
	else cout << "FRULA";
}
#include <iostream>
#include <vector>

using namespace std; 
vector <string> vec; 
vector <int> result; 
int main() {
	int n; cin >> n; 
	int length; cin >> length; 
	for (int i = 0; i < n; i++) {
		string str; 
		cin >> str; 
		vec.push_back(str);
	}
	for (int i = 0; i < length; i++) {
		int arr[26] = { 0 , }; int max = 0; 
		for (int j = 0; j < n; j++) {
			int x = vec[j][i] - 65;
			arr[x]++; 
		}
		for (int j = 0; j < 26; j++) {
			if (arr[j] > max)max = arr[j];
		}
		for (int j = 0; j < 26; j++) {
			if (arr[j] == max) {
				result.push_back(j); 
				break; 
			}
		}

	}
	string resultstr; 
	for (int i = 0; i < result.size(); i++) {
		char c = result[i] + 65;
		resultstr += c;
	}int cnt = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < length; j++) {
			if (resultstr[j] != vec[i][j]) {
				cnt++; 
			}
		}
	}
	cout << resultstr << "\n" << cnt; 
}
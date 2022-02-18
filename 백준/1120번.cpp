#include <iostream>
#include <string>
using namespace std; 
int main() {
	string A, B; cin >> A >> B; int max = 0; 
	int different = B.length() - A.length();
	for (int i = 0; i <= different; i++) {
		string new_str; int cnt = 0; 
		for (int j = 0; j < A.length(); j++) {
			new_str += B[i + j]; 
		}
		for (int j = 0; j < A.length(); j++) {
			if (new_str[j] == A[j]) {
				cnt++; 
			}

		}
		if (max < cnt)max = cnt; 
	}
	cout << A.length() - max; 
}
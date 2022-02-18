#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int n; cin >> n; vector<int> A(n); 
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end()); vector<int> B(n);
	for (int i = 0; i < n; i++) {
		cin >> B[i];
	}
	sort(B.begin(), B.end()); int result = 0; 
	for (int i = 0; i < n; i++) {
		result += A[i] * B[n - i-1];
	}
	cout << result; 
}
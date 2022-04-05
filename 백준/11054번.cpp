#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 


int main() {
	int n; cin >> n; 
	vector <int> pan(n); 
	for (int i = 0; i < n; i++) {
		cin >> pan[i]; 
	}
	vector <int> lis(n,1); 
	vector <int> lds(n,1); 

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (pan[i] > pan[j]&&lis[i]<lis[j]+1) {
				lis[i] = lis[j] + 1; 
			}


		}
	}
	for (int i = n-1; i >=0; i--) {
		for (int j = n-1; j>i; j--) {
			if (pan[i] > pan[j] && lds[i] < lds[j] + 1) {
				lds[i] = lds[j] + 1;
			}
		}
	}

	int res = 0; 
	for (int i = 0; i < n; i++) {
		int sum = lis[i] + lds[i]; 
		res = max(res, sum); 
	}
	cout << res-1; 

}
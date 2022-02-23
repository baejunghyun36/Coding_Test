#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int a; cin >> a; 
	
	vector <int> x;
	vector <int> y;
	for (int i = 0; i < a; i++) {
		int number; cin >> number; 
		x.push_back(number); 
	}
	sort(x.begin(), x.end()); 

	int b; 
	cin >> b; 
	
	for (int i = 0; i < b; i++) {
		int number; cin >> number;
		int first = 0;
		int end = x.size() - 1;
		int cnt = 0; 
	
		while (first<=end) {
			int mid = (first + end) / 2;
			if (x[mid] == number) { cnt++; break; }
			else if (x[mid]<number)first = mid+1;
			else end = mid-1;
		}
		if (cnt > 0)y.push_back(1);
		else y.push_back(0); 

	}
	for (int i = 0; i < y.size(); i++) {
		cout << y[i]<<" "; 
	}

	return 0; 
}
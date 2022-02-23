#include <iostream>
#include <vector>
using namespace std; 
int A, B;
int cnt = 0; 
int result1(int x) {
	int cnt = 0; 
	if (x < B) {
		while (x < B) {
			x++;
			cnt++; 
		}
	}
	else {
		while (x > B) {
			x--; 
			cnt++; 
		}
	}
	return cnt; 
}
int result2(int x) {
	int cnt = 1;
	if (x < B) {
		while (x < B) {
			x++;
			cnt++;
		}
	}
	else {
		while (x > B) {
			x--;
			cnt++;
		}
	}
	return cnt;
}
int main() {
	
	cin >> A >> B; 
	int n; cin >> n; 
	vector <int> vec; 
	vec.push_back(A); 
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		vec.push_back(x);
	}int finish = 0; int min = 1001; 
	for (int i = 0; i < vec.size(); i++) {
		int finish; 
		if (i == 0) {
			finish = result1(vec[i]);
		}
		else {
			finish = result2(vec[i]); 
		}
		
		if (min > finish)min = finish;
	}
	cout << min; 
}
#include <iostream>
#include <deque>
#include <vector>
using namespace std; 
int main() {
	int size; cin >> size; int number; cin >> number; 
	vector <int> vec; 
	deque <int> d; 
	for (int i = 1; i <= size; i++) {
		d.push_back(i); 
	}
	for (int i = 0; i < number; i++) {
		int a; cin >> a;
		vec.push_back(a);
	} int result = 0;
	for (int i = 0; i < number; i++) {
		int cnt = 0; 
		while (d.front() != vec[i]) {
			d.push_back(d.front());
			d.pop_front();
			cnt++;
		}
		int sum = d.size() - cnt; 
		int sum1 = cnt; 
		if (sum < sum1) {
			result += sum;
		}
		else
			result += sum1; 
		d.pop_front(); 
	}
	cout << result; 

}
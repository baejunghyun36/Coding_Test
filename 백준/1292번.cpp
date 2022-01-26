#include <iostream>
using namespace std; 
int arr[1001]; 
int main() {
	int index = 1; 
	int number = 1; 
	while (index <= 1000) {

		for (int i = 1; i <= number; i++) {
			arr[index++] = number; 
		}
		number++; 


	}
	int a, b; cin >> a >> b; 
	int sum = 0; 
	for (int i = a; i <= b; i++) {
		sum += arr[i]; 
	}
	cout << sum; 
	return 0; 

}
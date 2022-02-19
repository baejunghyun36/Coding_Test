#include <iostream>
#include <algorithm>
using namespace std; 

int A[100010]; 
void binary(int number, int low, int high) {	
	if ((low > high)||low<0||high>100000)		
	{
		cout << 0 << "\n"; 
		return; 	
	}
				
	else {
		int mid = (low + high) / 2; 
		if (A[mid] == number) {
			cout << 1 << "\n"; 
			return; 
		}
		else if (A[mid] < number) {
			low = mid + 1; 
		}
		else {
			high = mid - 1; 
		}
		binary(number, low, high); 
	}
}

int main() {
    	ios_base::sync_with_stdio(0); cin.tie(0);
	int N, M; 
	cin >> N; 
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int low = 0; 
	int high = N - 1; 
	sort(A, A + N); 
	cin >> M; 
	for (int i = 0; i < M; i++) {
		int number; 
		cin >> number; 
		binary(number, low, high); 
	}
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int arr[1001] = { 0 };
	int N, K; vector <int> abc; 
	cin >> N >> K; 
	for (int i = 1; i <= N; i++) {
		arr[i]++;
	}int cnt = 0; int index = 1; int y = N; 
	while (y--) {
		
		while (1) {
			if (index > N) {
				index = 1;
				continue; 
			}
			if (arr[index] == 1) {
				cnt++;
				

				if (cnt == K) {
					abc.push_back(index);
					arr[index] = 0; 
					cnt=0;
					index++; 
					break; 
				}
				index++; 
			}
			else index++; 


		}


	}
	cout << "<";
	for (int i = 0; i < N; i++) {
		if (i != N - 1)
			cout << abc[i] << ", ";
		else
			cout << abc[i];
	}
	cout << ">";
}
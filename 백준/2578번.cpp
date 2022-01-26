#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 

void result(int(* arr)[5], int x) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == x) {
				arr[i][j] = 0; 
				return; 
			}
		}
	}

}
int compare(int(*arr)[5]) {
	int cnt = 0; 
	for (int i = 0; i < 5; i++) {
		int number = 0;
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == 0) {
				number++;
			}
			if (number == 5)cnt++;
		}
	}
	for (int i = 0; i < 5; i++) {
		int number = 0;
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == 0) {
				number++;

			}
			if (number == 5)cnt++;
		}
	}
	int number = 0;
	for (int i = 0; i < 5; i++) {
		
		if (arr[i][i] == 0) {
			number++;
		}
		if (number == 5)cnt++; 
	}
	
	number = 0; 
	for (int i = 0; i < 5; i++) {
		
		if (arr[i][4 - i] == 0) {
			number++;
		}
		if (number == 5)cnt++;
	}
	if (cnt >= 3)return 1;
	else return 0;

}



int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	int brr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> brr[i][j];
		}
	}
	int cnt1 = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			result(arr, brr[i][j]);
			cnt1++;
			if (cnt1 > 10) {
				int result1 = compare(arr); 
				if (result1 == 1) {
					cout << cnt1; 
					return 0;
				}
				
			}

		}
	}
}
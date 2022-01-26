#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 

string cmp1[8] = {
	"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" }
;
string cmp2[8] = {
	"BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };
string arr[50];

int cmp1_(int x,int y) {
	int cnt = 0; 
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (cmp1[i][j] == arr[i + x][j + y]) {
				cnt++; 
			}
		}
	}
	return cnt; 
}
int cmp2_(int x, int y) {
	int cnt = 0; 
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (cmp2[i][j] == arr[i + x][j + y]) {
				cnt++; 
			}
		}
	}
	return cnt; 
}

int main() {
	pair <int, int>p1; 
	cin >> p1.first >> p1.second; 
	int min = 2500;
	for (int i = 0; i < p1.first; i++) {
		cin >> arr[i]; 
	}

	for (int i = 0; i + 8 <= p1.first; i++) {
		for (int j = 0; j + 8 <= p1.second; j++) {
			int x = cmp1_(i,j); 
			int y = cmp2_(i,j); 
			if (x >= y) {
				if (y < min)min = y; 
			}
			else {
				if (x < min)min = x; 
			}
		}
	}
	

	cout << min; 

}
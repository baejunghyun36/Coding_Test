#include <iostream>

int col[16]; 
int result; 
int n; 
using namespace std;

bool check(int row) {
	if (row == 0)return true; 
	else {

		int check_row = 1; 
		bool check = true; 
		while (check_row < row) {

			if (col[row] == col[check_row] || abs(col[row] - col[check_row]) == row - check_row) {
				check = false; 
				return check; 
			}


			check_row++; 
		}
		return check; 


	}


	

	
}


void queen(int row) {

	if (check(row)) {

		if (row == n) {
			result++; 
		}
		else {
			for (int i = 1; i <= n; i++) {
				col[row + 1] = i; 
				queen(row + 1); 
			}
		}

	}

	else return; 


}



int main() {

	ios_base::sync_with_stdio(0);

	cin.tie(0); cout.tie(0); 

	cin >> n; 

	queen(0); 

	cout << result; 

}
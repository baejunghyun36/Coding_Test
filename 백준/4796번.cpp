//p일중에 l일을 사용 할수 잇다 v 일짜리 휴가 
//입력은 lpv 순이고 출력은 Case 1: 14


#include <iostream>

using namespace std; 
int main() {
	int check = 1; 
	int Case = 1; 
	while (check) {
		int L, P, V; 
		cin >> L >> P >> V; 
		if (L == 0 && P == 0 && V == 0) {
			check = 0; 
			continue; 
		}
		
		//ex  연속하는 8일중에 5일을 쓰고 휴가를 20일 받은거면 
		// 20/8 == 2  v/p
		// 2*5       (v/p) * l       10일 사용 + 



		// 20%8 ==4    Restdate = v%p
		//restdate<L      restdate더하기 
		//
		
		int result = 0; 
		result += (V / P) * L; 
		int Restdate = V % P; 
		if (Restdate < L)result += Restdate;
		else result += L; 

		cout << "Case " << Case << ": " << result << "\n"; 
	
		Case++; 



	}



}
#include <iostream>
using namespace std;
int main() {
	int n;
	while (cin>>n) {
		int check = 0;
		int cnt = 1; 
		while (1) {
			check = check * 10 + 1;
			check %= n;
			if (check== 0) {
				printf("%d\n", cnt); 
				break;
			}
			cnt++;
		}
	}
}
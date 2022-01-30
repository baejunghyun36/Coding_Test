#include <iostream>
using namespace std; 



struct record {
	int number; 
	int gold, silver, bronze; 
}chain[1001];
int main() {

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int a, b;
	int gold, silver, bronze; 
	cin >> a >> b; 
	for (int i = 1; i <= a; i++) {
		cin >> chain[i].number; 
		cin >> chain[i].gold >> chain[i].silver >> chain[i].bronze; 
		if (chain[i].number == b) {
			gold = chain[i].gold;
			silver = chain[i].silver; 
			bronze = chain[i].bronze; 
		}
	}
	int cnt = 1; 
	for (int i = 1; i <= a; i++) {
		if (chain[i].number == b)continue;
		else {
			if (chain[i].gold > gold)cnt++;
			else if (chain[i].gold == gold && chain[i].silver > silver)cnt++;
			else if (chain[i].gold== gold && chain[i].silver == silver && chain[i].bronze > bronze)cnt++; 

		}

	}
	cout << cnt; 

	

}
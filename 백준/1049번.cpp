#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int N, M; cin >> N >> M; 
	vector <int> vec1; 
	vector <int> vec2; 
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b; 
		vec1.push_back(a);
		vec2.push_back(b);
	}
	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end()); 
	int x = N / 6 ; 
	int y = N % 6; 
	int sum = x * vec1[0] + y * vec2[0]; 
	int sum1 = vec2[0] * N; 
	int sum2 = (N / 6 + 1)*vec1[0]; 
	int min1= min(sum1, sum);
	int min2 = min(min1, sum2); 
	cout << min2; 

}
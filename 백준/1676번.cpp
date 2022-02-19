#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;

    int five_count = n/5 + n/25 + n/125;

    cout << five_count << '\n';

	return 0;
}
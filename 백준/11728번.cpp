#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a, b, i; cin >> a >> b;
    long long* arr = new long long[a]; long long* brr = new long long[b]; vector<long long > result;
    for (i = 0; i < a; i++) {
        cin >> arr[i];
        result.push_back(arr[i]);
    }
    for (i = 0; i < b; i++) {
        cin >> brr[i];
        result.push_back(brr[i]);
    }
    sort(result.begin(), result.end());
    for (i = 0; i < result.size(); i++)cout << result[i] << " ";

}
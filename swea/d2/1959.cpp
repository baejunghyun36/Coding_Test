#include<iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case)
    {
        int a, b; cin >> a >> b;
        vector<int> v11(a, 0);
        vector<int> v22(b, 0);
        vector<int> v1, v2; 
        int max_num = 0; 
        for (int i = 0; i < a; i++) cin >> v11[i]; 
        for (int i = 0; i < b; i++) cin >> v22[i]; 
        if (a <= b) {
            v1 = v11; 
            v2 = v22; 
        }
        else {
            v1 = v22; 
            v2 = v11; 
        }
        for (int i = 0; i <= v2.size() - v1.size(); i++) {
            int index = 0;
            int sum = 0; 
            for (int j = i; j < i + v1.size(); j++) {
                sum += v1[index++] * v2[j];
            }
            max_num = max(sum, max_num); 
        }
        cout << "#" << test_case << " " << max_num << "\n"; 
     
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
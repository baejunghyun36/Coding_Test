
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */
    char arr[8][8];

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int n; cin >> n;
        string store[8][8];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            string s = "";
            for (int j = n - 1; j >= 0; j--) {
                s += arr[j][i];
            }
            store[i][0] = s;
        }

        for (int i = n - 1; i >= 0; i--) {
            string s = "";
            for (int j = n - 1; j >= 0; j--) {
                s += arr[i][j];
            }
            store[n - 1 - i][1] = s;
        }

        for (int i = n - 1; i >= 0; i--) {
            string s = "";
            for (int j = 0; j < n; j++) {
                s += arr[j][i];
            }
            store[n - 1 - i][2] = s;
        }


        cout << "#" << test_case << "\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << store[i][j] << " ";
            }
            cout << "\n";
        }


    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
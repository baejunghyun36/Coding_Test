#include<iostream>

using namespace std;

bool func() {
    int arr[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }
    int check[10] = { 0, };
    int cnt = 1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            check[arr[i][j]]++;
        }
        for (int j = 1; j <= 9; j++) {
            if (check[j] != cnt) {
                return 0;
            }
        }
        cnt++;

    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            check[arr[j][i]]++;
        }
        for (int j = 1; j <= 9; j++) {
            if (check[j] != cnt) {

                return 0;
            }
        }
        cnt++;

    }
    for (int i = 0; i < 9; i++) {
        int k = 0;
        int row = (i / 3) * 3;
        int col = (i % 3) * 3;
        for (int j = row; j < row + 3; j++) {
            for (int k = col; k < col + 3; k++) {
                check[arr[j][k]]++;
            }
        }
        for (int j = 1; j <= 9; j++) {
            if (check[j] != cnt) {
                return 0;
            }
        }
        cnt++;

    }
    return 1;

}



int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */


    for (test_case = 1; test_case <= T; ++test_case)
    {

        cout << "#" << test_case << " " << func() << "\n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
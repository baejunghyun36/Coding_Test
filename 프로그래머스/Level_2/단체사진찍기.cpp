#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<string> data) {
    int answer = 0;
    vector <char> v = { 'A','C','F','J','M','N','R','T' };
    do {
        int index1 = 0;//첫번째 문자 위치 저장
        int index2 = 0;//두번째 문자 위치 저장
        for (int i = 0; i < n; i++) { //data 문자열 비교
            for (int j = 0; j < 8; j++) {
                if (data[i][0] == v[j])index1 = j;
                else if (data[i][2] == v[j])index2 = j;
            }
            char compare = data[i][3]; // '=' or '>' or '<' 저장
            int number = data[i][4] - '0'; //간격차이     
            if (compare == '='&& abs(index1 - index2) != number + 1) break;       
            else if (compare == '>'&& abs(index1 - index2) <= number + 1) break;            
            else if (compare == '<'&& abs(index1 - index2) >= number + 1) break;            
            if (i == n - 1)answer++;
        }
    } while (next_permutation(v.begin(), v.end()));//계속해서 정렬
    return answer;
}
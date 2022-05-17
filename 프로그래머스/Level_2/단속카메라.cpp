#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 0;
    sort(routes.begin(), routes.end()); 
    int temp = routes[0][1]; 
    answer++; 
    for(int i=1; i<routes.size(); i++){
        if(temp<routes[i][0]){ 
            temp=routes[i][1];  //나가는 시간 저장 
            answer++; 
        }
        else if(temp>=routes[i][1]){
            temp = routes[i][1]; //나가는 시간 수정
        }
    }
    return answer; 
}
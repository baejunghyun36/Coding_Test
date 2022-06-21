#include <string>
#include <vector>

using namespace std;

int result; 
int com[2] = {-1, 1}; //부호 설정을 위한거야
int numbers_size;  
vector <int> v_numbers; 
int target1; 
void dfs (int sum, int level){
    if(numbers_size==level){ //현재 level이 numbers의 크기만큼 왔어?
        if(sum==target1)  // 왔으면 sum값이랑 target값이랑 비교해 
        result++;  // 이것도 같아? 그러면 result값 올려
        return; //다 확인했으니까 돌아가자
    }
    for(int i=0; i<2; i++){
        sum= sum+(com[i]*v_numbers[level]); //현재 레벨 값을 음수 양수값으로 바꾸고 sum에 저장해
        dfs(sum, level+1);  //저장한 sum값과 level을 하나 올려서 다시 dfs 돌려
        sum = sum-(com[i]*v_numbers[level]); //return 됐으니까 다른한쪽도 확인하려면 더한걸 빼줘야지
    }   
}
int solution(vector<int> numbers, int target) {
    numbers_size= numbers.size(); // level에 해당해
    target1=target;  //전역변수 target1에 저장해. 파라미터 개수 줄이기 위한거야.
    v_numbers=numbers; //전역변수 v_numbers에 numbers 저장해. 이유는 위와 같아.
    dfs(0, 0); //현재 sum값 0 , level값 0 부터 시작
    return result; //전역변수 값 반환
}
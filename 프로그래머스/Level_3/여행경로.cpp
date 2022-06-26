#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector<string> answer;
vector<vector<string>> v;
bool visited[10001]={false}; 
int level; 
bool dfs(string start){
    if(answer.size()==level)return true; 
    for(int i=0; i<v.size(); i++){
        if(v[i][0]==start&&visited[i]==false){
            visited[i]=true; 
            answer.push_back(v[i][1]); 
            if(dfs(v[i][1]))return true; 
            visited[i]=false; 
            answer.pop_back(); 
        }
    }
    return false; 
}


vector<string> solution(vector<vector<string>> tickets) {
    
    sort(tickets.begin(), tickets.end()); 
    v = tickets; 
    level = v.size()+1; 
    answer.push_back("ICN"); 
    dfs("ICN"); 

    return answer;
}
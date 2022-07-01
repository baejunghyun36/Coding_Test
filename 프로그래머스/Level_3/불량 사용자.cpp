#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector <string> uid, bid;
int visited[1<<8], result; 
void dfs(int idx, int cnt, int v){
    if(cnt==bid.size()){
        if(!visited[v]){
            visited[v]=1; 
            result++; 
        }
        return ; 
    }    
    for(int i=0; i<uid.size(); i++){
           if(v&(1<<i))continue; 
           int k, j=idx;     
            if(uid[i].size()!=bid[j].size())continue; 
            for(k=0; k<bid[j].size(); k++){
                if(bid[j][k]!='*'&&bid[j][k]!=uid[i][k])break; 
            }
            if(k==bid[j].size()) dfs(idx+1, cnt+1, v|(1<<i));                  
    }    
}

int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 0;
    uid=user_id; 
    bid=banned_id;
    dfs(0, 0, 0);
    answer=result;     
    return answer;
}
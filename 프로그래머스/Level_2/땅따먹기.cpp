#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int level; 
vector<vector<int>> dp; 
vector<vector<int>> v; 
int dfs(int l, int pos){
    if(l==level) return 0; 
    int &res = dp[l][pos]; 
    if(res)return res; 
    res = 0; 
    for(int i=0; i<4; i++){
        if(pos==i){
            continue; 
        }
        else{
            res = max(res, v[l][pos] + dfs(l+1, i)); 
        }
    }
    return res; 
}

int solution(vector<vector<int> > land)
{
    level = land.size(); 
    v = land; 
    dp.resize(land.size(), vector<int>(4,0));
    int answer =0; 
    for(int i=0; i<4; i++){
       answer= max(answer, dfs(0, i)); 
    }
    return answer;
}
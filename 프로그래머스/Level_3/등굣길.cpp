#include <string>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll; 
int m,n; 
int map[100][100]; 
int dp[100][100]; 
int dy[2]={0,1}; 
int dx[2]={1,0}; 
int dfs(int y, int x){
    if(y== m-1 && x == n-1){
        return 1; 
    }
    int &ret = dp[y][x]; 
    if(ret!=-1)return ret; 
    ret = 0; 
    for(int i=0; i<2; i++){
        int nx = x + dx[i]; 
        int ny = y + dy[i]; 
        if(ny<0||ny>=m||nx<0||nx>=n||map[ny][nx])continue;    
        ret+=dfs(ny,nx);         
    }
    ret %= 1000000007;
    return ret;     
}

int solution(int x, int y, vector<vector<int>> puddles) {
    int answer = 0;
    m =y; n = x; 
    for(int i=0; i<puddles.size(); i++){
        map[puddles[i][1]-1][puddles[i][0]-1]=1;         
    }     
    memset(dp, -1, sizeof(dp)); 
    answer = dfs(0,0);      
    return answer;
}
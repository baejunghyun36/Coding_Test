#include <string>
#include <vector>
#include <string.h>
#include <tuple>
#include <queue>
#include <iostream>
using namespace std;
int m=5; 
int n=5; 
char map[5][5]; 
queue <pair<int,int>>sq;
int dx[4]={0,0,1,-1}; 
int dy[4]={1,-1,0,0}; 
bool bfs(int start_y, int start_x){
    int visited[5][5]; 
    int dis[5][5]; 
    memset(visited,0,sizeof(visited)); 
    memset(dis,0,sizeof(dis)); 
    while(!sq.empty()){
        int x, y; 
        tie(y,x)= sq.front();   
        visited[y][x]=1; 
        sq.pop();
        for(int i=0; i<4; i++){
            int nx = x+dx[i]; 
            int ny = y+dy[i]; 
            if(nx<0||nx>=5||ny<0||ny>=5)continue; 
            if(visited[ny][nx]==1||map[ny][nx]=='X')continue; 
            dis[ny][nx]=dis[y][x]+1; 
            sq.push({ny,nx});              
        }
    }    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(map[i][j]=='P'&&dis[i][j]<=2&&dis[i][j]>=1)return false;             
        }
    }
    return true;     
}
vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    for(int i=0; i<places.size(); i++){    
        queue <pair<int,int>>q;   
        for(int j=0; j<5; j++){
            string s= places[i][j]; 
            for(int k=0; k<5; k++){
                map[j][k]=s[k]; 
                if(map[j][k]=='P'){             
                    q.push({j,k}); 
                }           
            }              
        }     
        bool check;
        if(q.empty()){answer.push_back(1);continue; }
        while(!q.empty()){
            int y, x; 
            tie(y,x)=q.front(); 
            q.pop(); 
            sq.push({y,x});         
            check = bfs(y,x); 
            if(!check){
                answer.push_back(0);
                break; 
            } 
        }
        if(check)answer.push_back(1);         
    }    
    return answer;
}
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;
queue <pair<int,int>> q;
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int bfs(int number, int m, int n, int check, vector<vector<int>> &map, int max_num, vector<vector<int>> &visited){    
    int x, y; 
    int dx[4]={0,0,1,-1}; 
    int dy[4]={1,-1,0,0}; 
    while(!q.empty()){
        tie(y,x)=q.front(); 
        q.pop(); 
        for(int i=0; i<4; i++){
            int nx = x+dx[i]; 
            int ny = y+dy[i]; 
            if(nx<0||nx>=n||ny<0||ny>=m||visited[ny][nx])continue; 
            if(map[ny][nx]!=check)continue;
            number++; 
            visited[ny][nx]=1;             
            q.push({ny,nx}); 
        } 
    }
    return number;     
}
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;    
    int max_num=0; 
    vector <vector <int>> visited; 
    for (int i = 0; i < m; i++) {
        vector <int> v(n);
        for (int j = 0; j < n; j++) {    
            v[j] = 0; 
        }
        visited.push_back(v); 
    }    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(picture[i][j]!=0&&visited[i][j]==0){
                q.push({i,j});
                visited[i][j]=1;       
                number_of_area++;                
                max_num = max(max_num, bfs(1, m,n, picture[i][j], picture, max_num, visited) );
            }
        }
    }       
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_num;
    return answer;
}
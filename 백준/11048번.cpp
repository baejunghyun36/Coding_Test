#include <iostream>
#include <algorithm>
using namespace std;
int map[1001][1001]; 
int m, n; 
int cost[1001][1001]; 
int dx[3] = { 0,1,1 }; 
int dy[3] = { 1,0,1 }; 

int dfs(int y, int x) {
    if (y == m-1 && x == n-1) return map[y][x];          
    int& res = cost[y][x]; 
    if (res!=-1)return res; 
    res = 0; 
    for (int i = 0; i < 3; i++) {
        int nx = dx[i] + x; 
        int ny = dy[i] + y;
        if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;  
        res=max(dfs(ny, nx)+map[y][x],res);     
    }
    return res; 
}

int main()
{    
    cin >> m >> n; 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j]; 
            cost[i][j] = -1; 
        }
    }
    cout<<dfs(0, 0);
}
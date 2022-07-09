#include <string>
#include <vector>

using namespace std;
bool check[200]; 
int n1; 
void dfs (vector<vector<int>> &v, int node_idx){
    for(int i=0; i<n1; i++){
        if(v[node_idx][i]==1&&check[i]==0){
            check[i]=1; 
            dfs(v,i); 
        }
    }    
}


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    n1=n; 
    for(int i=0; i<n; i++){
        if(check[i]==0){
            answer++; 
            dfs(computers,i);             
        }
    }
    return answer;
}
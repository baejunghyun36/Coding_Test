#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int order=1; 
char arr[5]={'A', 'E', 'I', 'O', 'U'}; 
unordered_map<string, int> m; 
void dfs(int level, string s){
    if(level==5)return; 
    for(int i=0; i<5; i++){
        string temp = s; 
        temp+=arr[i]; 
        m[temp]=order++;
        dfs(level+1, temp); 
    }
}

int solution(string word) {
    dfs(0, ""); 
    return m[word]; 
}
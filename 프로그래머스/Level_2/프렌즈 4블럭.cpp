#include <string>
#include <vector>
using namespace std;
int solution(int m, int n, vector<string> board) {
    int answer = 0;
    vector <string> v; 
    for(int i=0; i<n; i++){ //map 뒤집기
        string s= ""; 
        for(int j=m-1; j>=0; j--)s+=board[j][i];  
        v.push_back(s); 
    }
    while(1){
        vector<vector<int>>map(n, vector<int>(m,0)); 
        int ch=0; 
        for(int i=0; i<v.size()-1; i++){
            if(v[i].size()<=1||v[i+1].size()<=1)continue; 
            for(int j=0; j<v[i].size()-1; j++){
                if(j>=v[i+1].size()-1)continue; 
                else{
                    char c = v[i][j];                
                    if(c==v[i][j+1]&&c==v[i+1][j]&&c==v[i+1][j+1]){
                        map[i][j]=map[i][j+1]=map[i+1][j]=map[i+1][j+1]=1;    
                        ch=1; 
                    } 
                }
            }
        }
        if(!ch)break;    
        for(int i=0; i<v.size(); i++){
            string s=""; 
            for(int j=0; j<v[i].size(); j++){
                if(map[i][j]==0) s+=v[i][j];                      
                else answer++;                 
            }
            v[i]=s; 
        }    
    }       
    return answer;
}
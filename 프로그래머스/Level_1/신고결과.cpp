#include <string>
#include <vector>
#include <map> 
#include <set> 
#include <sstream> 

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    
    vector<int> answer(id_list.size(), 0 ); 
    map <string, int> index_m; 
    for(int i=0; i<id_list.size(); i++){
        index_m[id_list[i]]=i; 
    }
    
    stringstream ss; 
    map <string, set<string>> m; 
    for(auto x : report){
        ss.str(x); 
        string s1, s2; 
        ss>>s1>>s2;         
        m[s2].insert(s1);     
        ss.clear(); 
    }    
    for(auto it : m){
        if(it.second.size()>=k){
            for(auto x : it.second){
                answer[index_m[x]]++;                 
            }
        }        
    }   
    
    return answer;
}
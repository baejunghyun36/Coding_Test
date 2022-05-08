#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
unordered_map <string, int> m; 
vector<int> solution(string msg) {
    vector<int> answer;
    int cnt =1; 
    for(int i=0; i<26; i++){
        string s= ""; 
        char c = 'A'+i;
        s+=c; 
        m[s]=cnt++; 
    }
    int prev = 0, j; 
    string s = "";  char c;  
    for(int i=0; i<msg.size(); i++){
        prev=0;   s= ""; 
        for(j=i; j<msg.size(); j++){
            c = msg[j]; 
            s+=c;            
            if(m[s]>0)prev = m[s];                 
            else{
                i=j-1; 
                m[s]=cnt++;                 
                answer.push_back(prev); 
                break; 
            }
            if(j==msg.size()-1)i=msg.size();           
        }             
    }
    if(prev)answer.push_back(prev); 
    return answer;
}
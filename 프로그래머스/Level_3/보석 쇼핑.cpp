#include <string>
#include <vector>
#include <map> 
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
int check[100001];
unordered_map <string, int> m; 
vector<int> solution(vector<string> gems) {
    vector<int> answer(2,0);
    vector <int> v (gems.size(), 0);
    int pos =1; 
    for(int i=0; i<gems.size(); i++){
        if(m[gems[i]]==0){
            m[gems[i]]= pos++; 
            v[i]=m[gems[i]];         
        }
        else v[i]=m[gems[i]];        
    }   
    int total = m.size(); // 문자열의 개수
    int s, e, cnt, len =1; 
    cnt = s = e= 0; 
    int min_len=1000000;    
    while(e<v.size()){            
        if(!check[v[e]]){
            cnt++; check[v[e]]++; e++;  
        }
        else if(check[v[e]]){
            check[v[e]]++; e++; 
        }              
        if(total ==cnt){
            while(check[v[s]]>0){
                check[v[s]]--; 
                if(check[v[s]]==0){
                    s++; 
                    break;
                } 
                s++;            
            }
            cnt--;             
            if(e-s<min_len){          
                min_len = e-s; 
                answer[0]=s; 
                answer[1]=e;      
            }
        }       
    }           
    return answer;
}
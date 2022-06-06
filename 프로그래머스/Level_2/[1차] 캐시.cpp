#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;     
    map <string, int> m; 
    int cnt =1;    
    if(cacheSize==0)return cities.size()*5;     
    for(int i=0; i<cities.size(); i++){ //문자열 대문자 변환 
        string s= cities[i]; 
        for(int j=0; j<s.size(); j++){
            if(s[j]>='a'&&s[j]<='z'){
                s[j]= toupper(s[j]); 
            }
        }                
        int check =0;
        string s1 = ""; 
        int min_n=INT_MAX;          
        for(auto x : m){      
            if(x.first==s){
                check=1; 
                m[s]=cnt;        
                answer+=1; 
            }
           if(min_n>x.second){
               min_n = x.second; 
               s1 = x.first; 
           }           
        }
        if(!check){        
            if(m.size()<cacheSize) m[s]=cnt; 
            else{    
                m.erase(s1);
                m[s]=cnt;                    
            }          
            answer+=5; 
        }             
        cnt++;
    }    
    return answer;
}
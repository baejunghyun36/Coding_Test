#include <string>
#include <vector>
#include <climits>
#include <algorithm> 
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = INT_MAX;
    if(s.size()==1)return 1; 
    for(int i=1; i<=s.size()/2; i++){
        string ss = s.substr(0,i); 
        string result=""; 
        int cnt=0; 
        for(int j=0; j<s.size(); j+=i){
            if(ss==s.substr(j,i)) cnt++;             
            else{
                if(cnt>=2) result+=to_string(cnt)+ss;        
                else result+=ss;                 
                ss = s.substr(j,i); 
                cnt=1; 
            }            
        }        
        if(cnt>=2)result+=to_string(cnt)+ss; 
        else result+=ss;        
        int len= result.size();
        answer = min(len, answer);         
    }    
    return answer;
}
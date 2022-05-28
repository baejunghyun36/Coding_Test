#include <string>
#include <vector>
#include <iostream>
using namespace std;
string solution(string m, vector<string> musicinfos) {
    string answer = "";
    int max_time =-1; 
    int pos; 
    while((pos = m.find('#'))!=string::npos){
        m[pos-1]=m[pos-1]+10; 
        m = m.substr(0,pos)+m.substr(pos+1); 
    }
    for(int i=0; i<musicinfos.size(); i++){        
        string s = musicinfos[i];         
        int cnt =0, s_t, e_t;   
        string title, content; 
        while((pos= s.find(','))!=string::npos){
            if(cnt==0){
                string temp = s.substr(0, pos); 
                s_t = 60*stoi(temp.substr(0,2))+stoi(temp.substr(3,2));                           
            }
            else  if(cnt==1){
                string temp = s.substr(0,pos); 
                e_t = 60*stoi(temp.substr(0,2))+stoi(temp.substr(3,2));                    
            }
            else title = s.substr(0,pos);
            cnt++; 
            s = s.substr(pos+1);             
        }     
        content = s; 
        while((pos = content.find('#'))!=string::npos){
            content[pos-1]=content[pos-1]+10; 
            content = content.substr(0,pos)+content.substr(pos+1); 
        }           
        string temp =""; 
        for(int i=0; i<(e_t-s_t)/content.size(); i++){
            temp+=content; 
        }
        temp+=content.substr(0, (e_t-s_t) % content.size());         
        if(temp.find(m)!=string::npos){
            if(max_time<e_t-s_t){
                max_time = e_t-s_t; 
                answer = title; 
            }            
        }        
    } 
    if(max_time ==-1)answer ="(None)";    
    return answer;
}
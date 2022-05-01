#include <string>
#include <vector> 
using namespace std;
int solution(string dartResult) {
    int answer = 0;
    string s= dartResult; 
    vector<int> v; 
    string s1=""; 
    for(int i=0; i<s.size(); i++){        
        if(s[i]>='0'&&s[i]<='9')s1+=s[i];        
        else if(s[i]=='*'||s[i]=='#'){
            if(s[i]=='*'){
                if(v.size()==1)v.back()*=2; 
                else {
                    v[v.size()-1]*=2; 
                    v[v.size()-2]*=2;                     
                }             
            }
            else v.back()*=-1;             
        }
        else{
            v.push_back(stoi(s1)); 
            s1="";             
            if(s[i]=='S') v.back()*=1;             
            else if(s[i]=='D') v.back()*=v.back();             
            else v.back()=v.back()*v.back()*v.back();            
        }             
    }       
    for(int i=0; i<v.size(); i++) answer+=v[i];     
    return answer;
}
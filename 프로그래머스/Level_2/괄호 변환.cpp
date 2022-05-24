#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string answer = "";
string split (string s){    
    if(!s.size())return s; 
    vector <int> x(2,0); int index =0;  
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(')x[0]++; 
        else if(s[i]==')')x[1]++; 
        if(x[0]==x[1]&&x[0]!=0){
            index=i; 
            break; 
        }
    }
    stack <int> st; 
    string v ="";
    string u = s.substr(0,index+1); 
    if(s.size()!=index+1) v = s.substr(index+1); 
    else v=""; 
    
    for(int i=0; i<u.size(); i++){
        if(st.empty())st.push(u[i]); 
        else if (st.top()=='('&&u[i]==')') st.pop(); 
        else st.push(u[i]);     
    }
    if(st.empty()) return u += split(v); 
    else{
        string temp = "(";
        temp+=split(v); 
        temp+=")"; 
        if(u.size()>2){
            u=u.substr(1,u.size()-2);
            for(int i=0; i<u.size(); i++){
                if(u[i]=='(')u[i]=')'; 
                else u[i]='('; 
            }
        }
        else u=""; 
        return temp+=u; 
    }
}


string solution(string p) {   
    answer = split(p);     
    return answer;
}
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <unordered_map> 
#include <algorithm>
using namespace std;
bool cmp (pair<string,int> v1, pair<string,int> v2){
    return v1.first < v2.first; 
}
vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    unordered_map <string, int> m_answer; 
    unordered_map <string, int> m; 
    for(int i=0; i<records.size(); i++){
        stringstream s(records[i]); 
        string time, number, data; 
        s>>time>>number>>data; 
        cout<<time <<" "<<number <<" "<< data<<endl; 
        int t= stoi(time.substr(0,2))*60 + stoi(time.substr(3,2));           
        if(data=="IN") m[number] = t;         
        else if(data=="OUT"){
            t = t-m[number];
            m.erase(number); 
            m_answer[number]+=t;                        
        }       
    }
    for (auto x : m){   
        int t = 23*60+59-x.second;
        m_answer[x.first]+= t; 
    }
    for (auto x : m_answer){    
        int t = x.second; 
        if(t<=fees[0]) m_answer[x.first]=fees[1];         
        else if(t>fees[0]){
            t-=fees[0]; 
            if(t%fees[2]) m_answer[x.first]=(t/fees[2]+1)*fees[3]+fees[1];             
            else m_answer[x.first]=t/fees[2]*fees[3]+fees[1]; 
        }        
    }    
    vector <pair<string, int>> v (m_answer.begin(),m_answer.end());
    sort(v.begin(),v.end(),cmp);     
    for(auto x : v) answer.push_back(x.second);         
    return answer;
}
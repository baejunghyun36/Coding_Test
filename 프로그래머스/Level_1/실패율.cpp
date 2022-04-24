#include <string>
#include <vector>
#include <algorithm> 
#include <map>
#include <iostream>
using namespace std;

bool cmp (pair<int,double> v1, pair<int,double> v2){
    if(v1.second==v2.second)return v1.first < v2.first;     
    else return v1.second > v2.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;    
    map <int,int> m; 
    vector <pair<int, double>> v(N);       
    int prev=0;
    for(int i=0; i<stages.size(); i++) m[stages[i]]++;     
    for(int i=0; i<N; i++){           
        v[i].first= i+1;  
        if(m[i+1]==0){
          v[i].second = 0; 
          continue; 
        }   
        v[i].second = (double)m[i+1]/(stages.size()-prev);        
        prev +=m[i+1]; 
    }    
    sort(v.begin(),v.end(),cmp);     
    for(int i=0; i<v.size(); i++){
        answer.push_back(v[i].first); 
    }    
    return answer; 
    //
}
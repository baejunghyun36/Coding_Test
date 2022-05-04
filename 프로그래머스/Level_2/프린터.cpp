#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<int> priorities, int location) {
    string q = ""; 
    int res_num = priorities[location]; 
    for(int i=0; i<priorities.size(); i++){
        if(i==location)q+='0';  
        else q+='0'+priorities[i];         
    }
    sort(priorities.begin(), priorities.end()); 
    int cnt =1; 
    for(int i=priorities.size()-1; i>=0; i--){
        char c = priorities[i]+'0'; 
        for(int j=0; j<q.size(); j++){
            if(q[j]=='0'&&priorities[i]==res_num){
                return cnt; 
            }
            else if(q[j]==c){
                string s= q.substr(0, j); 
                q = q.substr(j+1); 
                q+=s; 
                break; 
            }
        }
        cnt++;       
    }   
}
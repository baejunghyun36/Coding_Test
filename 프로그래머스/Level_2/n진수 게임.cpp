#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
string solution(int n, int t, int m, int p) {
    string answer = "";
    string temp ="0"; 
    int cnt =0, i=0;  
    while(cnt!=t){
        int x = i++;
        string s =""; 
        while(1){
            int y= x % n; 
            if(y>=10){
                char c = 'A'+ y % 10; 
                s+=c; 
            }
            else s+=to_string(x%n); 
            x /=n; 
            if(!x)break; 
        }
        reverse(s.begin(),s.end());         
        temp+=s; 
        if(temp.size()>=m+1){
            answer+=temp[p]; 
            cnt++; 
            temp= temp[0]+temp.substr(m+1); 
        }        
    }    
    return answer;
}
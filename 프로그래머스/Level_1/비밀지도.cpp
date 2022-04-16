#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;    
    for(int i=0; i<arr1.size();i++){
        int check = arr1[i] | arr2[i];         
        string s=""; 
        while(s.size()!=n){
            if(check%2==0)s.push_back(' '); 
            else s.push_back('#'); 
            check/=2;             
        }
        reverse(s.begin(),s.end()); 
        answer.push_back(s); 
    }    
    return answer;
}
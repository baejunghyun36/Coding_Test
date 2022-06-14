#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2){
    return s1+s2 > s2+s1; 
}
string solution(vector<int> numbers) {
    vector <string> v; 
    for(int i=0; i<numbers.size() ;i++){
        string s= to_string(numbers[i]); 
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    string answer="";
    for(string s : v){
        answer+=s;     
    }
    if(answer[0]=='0')return "0"; 
    return answer; 
}
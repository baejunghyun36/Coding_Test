#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
typedef long long ll; 
bool is_prime(ll n) {
    if(n < 2) return false;
    for(int i=2; i<=sqrt(n); ++i) {
        if(n % i == 0) return false;
    }    
    return true;
}
int solution(int n, int k) {   
    int answer = 0;
    string s=""; int prev=0; 
    while(n){
        s+=(n%k)+'0';  
        n/=k; 
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    string temp ="";
    vector <ll> prime;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='1'&&s[i]<='9')temp+=s[i];         
        else{
            if(!temp.empty()){
                prime.push_back(stoll(temp)); 
                temp=""; 
            }
        }
    }
    if(temp.size())prime.push_back(stoll(temp));     
    for(int i=0; i<prime.size(); i++) if(is_prime(prime[i])) answer++ ;      
    return answer;
}
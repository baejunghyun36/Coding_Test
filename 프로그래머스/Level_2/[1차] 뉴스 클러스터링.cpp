#include <string>
#include <iostream>
#include <map> 
using namespace std;
int solution(string str1, string str2) { 
    map <string, int> m1; 
    map <string, int> m2; 
    string temp =""; 
    for(int i=0; i<str1.size()-1; i++){
        if(str1[i]>='a'&&str1[i]<='z')temp+=str1[i]-32;         
        if(str1[i]>='A'&&str1[i]<='Z')temp+=str1[i]; 
        if(str1[i+1]>='a'&&str1[i+1]<='z')temp+=str1[i+1]-32; 
        if(str1[i+1]>='A'&&str1[i+1]<='Z')temp+=str1[i+1]; 
        if(temp.size()==2)m1[temp]++;        
        temp=""; 
    }
    for(int i=0; i<str2.size()-1; i++){
        if(str2[i]>='a'&&str2[i]<='z')temp+=str2[i]-32;         
        if(str2[i]>='A'&&str2[i]<='Z')temp+=str2[i]; 
        if(str2[i+1]>='a'&&str2[i+1]<='z')temp+=str2[i+1]-32; 
        if(str2[i+1]>='A'&&str2[i+1]<='Z')temp+=str2[i+1]; 
        if(temp.size()==2)m2[temp]++;       
        temp=""; 
    }
    double sum_a=0; 
    double sum_b=0; 
    for(auto x : m1){
        if(m2[x.first]>0){
            sum_a+=(x.second>m2[x.first]? m2[x.first]: x.second); 
            sum_b+=(x.second<m2[x.first]? m2[x.first]: x.second);
        }
    }
    for(auto x : m1){
        if(m2[x.first]>0)continue; 
        else sum_b += x.second; 
    }      
    for (auto x : m2){
        if(m1[x.first]>0)continue; 
        else sum_b +=x.second; 
    }
    if(m1.size()==0||m2.size()==0) sum_a =sum_b = 1;    
    double result = sum_a/sum_b * 65536; 
    return (int)result;
}
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> people, int limit) {
    int result =0; 
    int s = 0; 
    int e = people.size()-1; 
    sort(people.begin(), people.end()); 
    while(s<=e){
        if(s==e){
            result++; 
            break; 
        }
        else if(people[s]+people[e]<=limit){
            result++; 
            s++; 
            e--; 
        }
        else{
            e--;
            result++; 
        }
    }
    return result;    
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    vector <string> v = phone_book;     
    sort(v.begin(), v.end()); 
    for(int i=1; i<v.size(); i++){
        if(v[i].find(v[i-1])==0)return false;
    }
    return true;
}
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
vector <vector<int>> v;
bool cmp(vector <int> v1, vector<int> v2) {
    return v1.size() < v2.size();
}
vector<int> solution(string s) {
    vector<int> answer;
    int check = 0;
    s = s.substr(1, s.size() - 2);
    while (1) {
        vector <int> st;
        int a = s.find('{');
        int b = s.find('}');
        string s1 = s.substr(a + 1, b - a - 1);
        int pos;
        int cnt = 0; 
        while ((pos = s1.find(',')) != string::npos) {
            string s2 = s1.substr(0, pos);
            st.push_back(stoi(s2));
            s1 = s1.substr(pos + 1);    
        }
        st.push_back(stoi(s1)); 
        v.push_back(st);
        if (b == s.size() - 1)break;
        s = s.substr(b + 1);
    }    
    sort(v.begin(), v.end(),cmp); 
    map <int, int> m; 
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (m[v[i][j]])continue; 
            else {
                m[v[i][j]]++; 
                answer.push_back(v[i][j]); 
            }
        }
    }
    return answer;
}
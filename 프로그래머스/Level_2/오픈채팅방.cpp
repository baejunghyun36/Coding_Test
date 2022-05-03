#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <unordered_map>
using namespace std;
vector<string> solution(vector<string> record){
    vector <string> ans; 
    string cmd, uid, name; 
    map<string, string> m; 
    for(auto x : record){
        stringstream ss(x); 
        ss>>cmd>>uid; 
        if(cmd =="Enter"||cmd=="Change"){
            ss>>name; 
            m[uid]=name; 
        }
    }
	for (string x : record) {
		stringstream ss(x); 
		ss >> cmd>>uid;
		name = (m.find(uid)->second);
		if (cmd == "Enter")	ans.push_back(name + "님이 들어왔습니다.");
		else if (cmd == "Leave") ans.push_back(name + "님이 나갔습니다.");
	}
	return ans; 	    
    
}
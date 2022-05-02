#include <string>
#include <vector>
#include <cmath>
using namespace std;
int temp_l, temp_r, l_cnt, r_cnt; 
string solution(vector<int> numbers, string hand) {
    string answer = "";
    int lh=10, rh=12; 
    vector <int> v = numbers; 
    for(int i=0; i<v.size(); i++){
        if(v[i]==0)v[i]=11; 
        if(v[i]==1||v[i]==4||v[i]==7){
           answer+='L';
           lh = v[i]; 
        }
        else if (v[i]==3||v[i]==6||v[i]==9){
           answer+='R'; 
           rh = v[i]; 
        }
        else{
            l_cnt=0; r_cnt=0; temp_l =lh; temp_r = rh;                
            if(lh%3==1){
                temp_l++; 
                l_cnt++; 
            }
            if(rh%3==0){
                temp_r--; 
                r_cnt++; 
            }
            if(abs(v[i]-temp_l)/3+l_cnt<abs(v[i]-temp_r)/3+r_cnt){
                answer+='L'; 
                lh = v[i]; 
            }
            else if(abs(v[i]-temp_l)/3+l_cnt>abs(v[i]-temp_r)/3+r_cnt){
                answer+='R';
                rh = v[i]; 
            }
            else{
                if(hand=="right"){
                    answer+='R'; 
                    rh = v[i]; 
                }
                else{
                    answer+='L'; 
                    lh = v[i]; 
                }
            }                       
        }
    }
    return answer;
}
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
typedef long long ll;
ll l , h; 
ll N;
bool check(ll mid, vector<int>& times) {
    ll p_cnt = 0;//사람 수
    for (int i = 0; i < times.size(); i++) {
        p_cnt += mid/times[i];
    }
    return p_cnt >=N;//시간안에 사람수가 더 많으면 시간 줄여
}
long long solution(int n, vector<int> times) {
    long long answer = 0;
    sort(times.begin(),times.end());
    N = n;
    l=1;
    h = times[times.size()-1]; 
    h =h*n; 
    answer=h; 
    while (l <= h) {            
        ll mid = (l + h) / 2;  
        if (check(mid, times)) {
            h = mid-1;
            answer = mid;
        }
        else l = mid+1;
    }
    return answer;
}
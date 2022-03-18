#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	stack<int> s;
	vector<int> h(n+1), res(n+1, 0);
	for(int i=1; i<=n; i++){
		cin>>h[i];
	}
	for(int i=n; i>=1; i--){
		while(!s.empty() && h[i]>h[s.top()]){
			res[s.top()]=i;
			s.pop();
		}
		s.push(i);
	}
	for(int i=1; i<=n; i++){
		cout<<res[i]<<" ";
	}
	return 0;
}
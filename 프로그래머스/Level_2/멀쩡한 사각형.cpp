using namespace std;
typedef long long ll;
long long solution(int w,int h) {    
    ll answer =1; 
    answer = (ll)w * (ll)h - (w+h);   
    int temp; 
    int w1, h1;     
    
    w1 = w; h1=h; 
    while(h1!=0){ //최대공약수
        temp = w1 % h1; 
        w1 = h1; 
        h1 = temp;         
    }    
    
    answer += w1; 
    return answer; 
}
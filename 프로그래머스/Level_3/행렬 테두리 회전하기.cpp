#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    vector<vector<int>> map(rows, vector<int>(columns, 0));
    int num=1; 
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            map[i][j]=num++; 
        }
    }
    for(int i=0; i<queries.size(); i++){
        int x1,x2,y1,y2; 
        y1=queries[i][0]-1; 
        x1=queries[i][1]-1; 
        y2=queries[i][2]-1; 
        x2=queries[i][3]-1; 
        int temp1=map[y1+1][x1]; 
        int min_n = temp1; 
        for(int j=x1; j<=x2; j++){
            //y=y1, x=j
            min_n = min(min_n, map[y1][j]);
            int temp2 = map[y1][j]; 
            map[y1][j]=temp1; 
            temp1 = temp2; 
        }
        for(int j=y1+1; j<=y2; j++){
            //y=j, x=x2
            min_n = min(min_n, map[j][x2]);
            int temp2 = map[j][x2];             
            map[j][x2]=temp1; 
            temp1 = temp2; 
        }
        for(int j=x2-1; j>=x1; j--){
            //y=y2, x=j; 
            min_n = min(min_n, map[y2][j]); 
            int temp2 = map[y2][j];             
            map[y2][j]=temp1; 
            temp1 = temp2; 
        }
        for(int j=y2-1; j>y1; j--){
            //y=j; x=x1; 
            min_n = min(min_n, map[j][x1]); 
            int temp2 = map[j][x1];             
            map[j][x1]=temp1; 
            temp1 = temp2; 
        }
        answer.push_back(min_n); 
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> answer;
void best(int a, int b){
    int c= a+b;
    if(c<2){
        answer.push_back(6);
    }
    else {
        answer.push_back(7-c);
    }    
    if(b<2){
        answer.push_back(6);
    }
    else {
        answer.push_back(7-b);
    }
}
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int count=0,zcount=0;
    for(int i=0;i<lottos.size();i++){
        if(lottos[i]==0){
                zcount++;
                continue;
            }
        for(int j=0;j<win_nums.size();j++){
            if(lottos[i]==win_nums[j]){
                count++;
                continue;
            }
        }
    }
    best(zcount, count);
    return answer;
}
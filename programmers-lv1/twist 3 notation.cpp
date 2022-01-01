#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int n) {
    int answer = 0,a=1;
    vector<int> v;
    while(n>0){
        int temp=n%3;
        v.push_back(temp);
        n/=3;
    }
    for(int i=v.size()-1;i>=0;i--){
        answer+=v[i]*a;
        a=a*3;
    }
    return answer;
}
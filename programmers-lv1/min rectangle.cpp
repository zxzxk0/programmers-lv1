#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxnum1=0, maxnum2=0;
    for(int i=0;i<sizes.size();i++){
        sort(sizes[i].begin(),sizes[i].end());
    }
    for(int j=0;j<sizes.size();j++){
        maxnum1=max(maxnum1,sizes[j][0]);
        maxnum2=max(maxnum2,sizes[j][1]);
    }
    answer=maxnum1*maxnum2;
    return answer;
}
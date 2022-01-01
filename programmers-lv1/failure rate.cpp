#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair <double, int>&a, pair<double, int>&b){
    if(a.first==b.first) return a.second<b.second;
    else return a.first>b.first;
}
int cnt[501];
vector<pair<double, int>> failure;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int stage_size = stages.size();
    for (int i = 0; i < stage_size; i++){
        cnt[stages[i]]++; 			
    }
    int mo = stage_size;			
    for (int i = 1; i <= N; i++){
        if ( cnt[i] == 0) failure.push_back({0, i});
        else{
            double t = (double)cnt[i] / mo;			
            failure.push_back({t, i});
        }
        mo -= cnt[i];				
    }
    sort(failure.begin(), failure.end(), compare);
    for (int i = 0; i < failure.size(); i++){
        auto p = failure[i];
        answer.push_back(p.second);
    }    
    return answer;
}
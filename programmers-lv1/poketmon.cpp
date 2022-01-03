#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> vec;
    int a=nums.size()/2;
    for(int i=0;i<nums.size();i++){
        vec.push_back(nums[i]);
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    if(vec.size()>=a){
        answer=a;
    }
    else if(vec.size()<a){
        answer=vec.size();
    }
    return answer;
}
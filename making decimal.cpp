#include <vector>
#include <iostream>
using namespace std;

// 소수 판별 함수
bool prime(int num){
    if(num==0 || num==1) return false;
    for(int i=2; i<num; i++){
        if(num%i==0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int z=j+1; z<nums.size(); z++){
                int n = nums[i] + nums[j] + nums[z];
                if(prime(n)==true){
                    answer++;
                }
            }
        }
    }
    
    return answer;
}
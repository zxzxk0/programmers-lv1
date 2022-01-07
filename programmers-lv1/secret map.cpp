#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> list;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]%2==1 || arr2[i]%2==1){
                list.push_back("#");
            }
            else{
                list.push_back(" ");
            }
            arr1[i]=arr1[i]/2;
            arr2[i]=arr2[i]/2;
        }  
        answer.push_back(list[n-1]);
        for(int j=n-2;j>=0;j--){
            answer[i]+=list[j];
        }
        list.clear();
    
    }
    return answer;
}
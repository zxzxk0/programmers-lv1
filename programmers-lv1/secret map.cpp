#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    if(s.size()%2==0){
        return s.substr(s.size()/2-1,2);
    }
    else{
    return s.substr(s.size()/2,1);
    }
}
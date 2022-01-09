#include <string>
#include <vector>

using namespace std;
string day[7]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
int year[12]={31,29,31,30,31,30,31,31,30,31,30,31};
string solution(int a, int b) {
    string answer = "";
    int temp=0;
    for(int i=0;i<a-1;i++){
        temp+=year[i];
    }
    temp+=b;
    answer=day[temp%7];
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for(int i=0;i<new_id.length();i++){         //1단계 new_id의 모든 대문자를 대응되는 소문자로 치환합니다.
        if(new_id[i]<='Z'&&new_id[i]>='A'){
            new_id[i]=tolower(new_id[i]);
        }
    }
    for(int i=0;i<new_id.length();i++){         //2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다.
         if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9')
              || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.'){
            i++;
            continue;
        }
        new_id[i].erase(new_id.begin+i);
    }
    for(int i=1;i<new_id.length();i++){         //3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환합니다.
        if(new_id[i]=='.'&&new_id[i-1]=='.'){
            new_id.erase(new_id.begin()+i);
            continue;
        }
    }
    if(new_id.front()=='.'){                    //4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.(맨처음 '.' 제거)
        new_id.erase(new_id.begin());
    }
    if(new_id.length()==0){                     //5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
        new_id="a";
    }
    if(new_id.back()=='.'){                     //4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.(맨마지막 '.' 제거)
        new_id.erase(new_id.end()-1);
    }
    if(new_id.length()>=16){                    //6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거합니다.
        while(new_id.length()!=15){             // 만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.
            new_id.erase(new_id.end()-1);
        }
    }
    if(new_id.length()<=2){
        while(new_id.length()!=3){
            new_id+=new_id.back();
        }
    }
    return answer;
}#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {

    // 1 단계
    for(int i = 0; i < new_id.length(); i++)
        if (new_id[i] >= 'A' && new_id[i] <= 'Z') 
            new_id[i] = tolower(new_id[i]);
    
    // 2 단계 
    for(int i = 0; i < new_id.length(); ) {
        if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9')
              || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
        {
            i++;
            continue;
        }
        
        new_id.erase(new_id.begin() + i);
    }
    
    // 3 단계
    for(int i = 1; i < new_id.length(); ){
        if (new_id[i] == '.' && new_id[i - 1] == '.'){
            new_id.erase(new_id.begin() + i);
            continue;
        }
        else i++;
    }
    
    // 4 단계
    if (new_id.front() == '.') new_id.erase(new_id.begin());
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
    
    // 5 단계
    if (new_id.length() == 0) 
        new_id = "a";
    
    // 6 단계
    if (new_id.length() >= 16){
        while(new_id.length() != 15){
            new_id.erase(new_id.begin() + 15);
        }
    }
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
    
    // 7 단계
    if (new_id.length() <= 2){
        while(new_id.length() != 3){
            new_id += new_id.back();
        }
    }
    
    return new_id;
}
#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> stk;
    for(int i=0;i<moves.size();i++){
        int move=moves[i]-1; //moves에 있는 크기가 코드상 위치보다 1 크기 때문에
        for(int j=0;j<board.size();j++){
            if(board[j][move]!=0){ //칸이 비어있지 않고
                if(!stk.empty()&&stk.top()==board[j][move]){ //스텍에 인형이 있으면서 그 맨 위가 이동시킨 인형이랑 같을때
                    stk.pop(); //그 스텍에 있는 인형을 빼고
                    answer+=2; //답에 2 추가
                }
                else{
                stk.push(board[j][move]); //아닐시 스텍에 인형 추가하고
                }
                board[j][move]=0; //이동시킨 인형 원위치를 비우고
                break; //멈춘다
            }
        }
    }
    return answer;
}
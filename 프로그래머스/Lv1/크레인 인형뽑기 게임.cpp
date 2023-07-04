#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    stack<int>s;
    
    for(int i=0;i<moves.size();i++){
        
        int posi=moves[i]-1;
        
        for(int j=0;j<board.size();j++){ //가장 위 인형 찾기
            
            if(board[j][posi]!=0){
                if(!s.empty()){ //인형이 쌓여있을 때
                    if(s.top() == board[j][posi]){ //인형 터트리기
                        answer++;
                        s.pop();
                    }
                    else s.push(board[j][posi]); //인형 쌓기
                    
                }else{ //인형이 하나도 없을 때
                    s.push(board[j][posi]);
                }
                
                board[j][posi]=0; //빈 곳으로 만들기
                break;
            }
        }
        
    }
    
    return answer*2;
}

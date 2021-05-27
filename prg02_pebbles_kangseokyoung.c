//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    bool restart_game, my_turn; //자료형을 불린으로 선언만 하면 일단 기본값(초기화값)은 false => int,등등 다른 자료형은 null값일까?
    int n_pebble = 0, n_take = 0;

    
    
    restart_game = true;
    while (restart_game) {
        // n_pebble <-- 게임 시작 전 조약돌 개수 입력
        
        // 게임 시작
        bool my_turn = true; // my_turn이 true: player1, false: player2(AI)
        while (true) {
            
            if (my_turn) {
                    // n_take <-- 몇 개를 가져갈지 묻는다.
            } else {
                    // n_take <-- AI가 몇 개를 가져갈지 결정한다.
            }
            
            if (n_pebble >= n_take) {
                    // n_pebble을 n_take만큼 감소시킴
                    // n_pebble이 0이면 게임 종료(break)
                    // n_pebble이 0이 아니면 my_turn = !my_turn;
            } else {
                    // 턴을 바꾸지 않고 계속한다(아무것도 안 함).
            }
            
        }
        
        // 누구 차례에 끝났는지(my_turn)에 따라서 패배자 출력

        // restart_game <-- 게임을 계속할지 묻는다
                
    }
    
    
    
    
    return 0;
}


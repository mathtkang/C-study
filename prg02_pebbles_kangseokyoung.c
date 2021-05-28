//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    bool restart_game, my_turn; //자료형을 불린으로 선언만 하면 일단 기본값(초기화값)은 false => int,등등 다른 자료형은 null값일까?
    int n_pebble = 0; //조약돌 전체 개수 담는 변수
    int n_take = 0; //나 또는 인공지능이 가져가는 조약돌 개수 담는 변수

    restart_game = true;
//    while (restart_game) {
        printf("===조약돌 게임을 시작합니다.===");
    
        n_pebble = rand()%4+7; //7-10사이의 난수 발생 -> 마지막 20-22개
        printf("전체 조약돌은 %d개 입니다.",n_pebble); // 게임 시작 전 조약돌 개수

        // 게임 시작
        my_turn = true; // my_turn이 true: player1, false: player2(AI)
        while (true) {

            
            //player1,2의 턴일때 가져갈 조약돌의 갯수 입력
            if (my_turn) { //player1 (내차례) : my_turn == true
                    
                    printf("가져갈 조약돌 개수는?");
                    scanf("%d",&n_take); // 몇 개를 가져갈지 묻는다.
                
                if (n_take >= 1 && n_take <= 6) {//1~6개 받음 (정상) -> 마지막 1~20 사이값 받음
                    printf("player1(나)차례 : 몇 개를 가져갑니까? ");
                } else {
                    printf("다시입력하세요");
                    break; //여기서 브레이크 맞지? 브레이크하면 여기서 가장 가까운 반복문만 빠져나오고 다시 게임시작 부터~
                }
                
            } else { //player2 (AI차례) : my_turn == false
                //AI가 몇 개를 가져갈지 결정한다.
                if(n_pebble >= 4){
                    n_take = 3;
                } else if (n_pebble == 1){
                    n_take = 1;
                } else { // n_pebble가 2,3일 때
                    n_take = n_pebble-1;
                }
                printf("%d",n_take);
            }

            //전체 조약돌에서 가져갈 조약돌의 갯수를 제외
            if (n_pebble >= n_take) {
                // n_pebble을 n_take만큼 감소시킴
                n_pebble -= n_take;
                printf("남은 조약돌 개수 : %d개", n_pebble);
                
                
                
                if (n_pebble == 0) {
                    // n_pebble이 0이면 게임 종료(break)
                    // printf("남은 조약돌 개수 : 0개"); //위에서 이미 작성하고 코드로 내려옴
                    break;
                } else {
                    // n_pebble이 0이 아니면 my_turn = !my_turn;
                    my_turn = !my_turn; //이게 뭔말이징? -->> my_turn의 t,f값을 바꿔준다!(flag)
                }
                    
                    
            } else {
                    // 턴을 바꾸지 않고 계속한다(아무것도 안 함).
            }

        }//두번째 while문
        
        // 누구 차례에 끝났는지(my_turn)에 따라서 패배자 출력 -> 끝나고 바로 내려온거니까
    if(my_turn == true){ //내가 패배
        printf("player1(나)가 패배했습니다. player2(AI)승!!");
    } else {
        printf("player2(AI)가 패배했습니다. player1(나)승!!");
    }
    
    
    
    //요기를 반복문으로 감싸줘야할 것 같은데!
    while (true) {
        // restart_game <-- 게임을 계속할지 묻는다
        printf("계속하시겠습니까? [y/n]"); //yes:1:true, no:0:false
        char c;
        scanf("%c", &c);
        if(c == 'y') {
            restart_game = true;
            break; //? or continue??
        } else if (c == 'n') {
            restart_game = false;
//            return; //아예 함수를 끝냄 - 이 방법 대신에, 첫번째 while문이 돌아가도록 한 restart_game를 false로 바꿔주는 것도 가능!
        } else {
            printf("다시 입력하세요.");
            //이거 이후에 다시 물어봐야하는데!
        }
        
    }
    
                
//    }//첫번째 while문
    
    
    
    
    return 0;
}


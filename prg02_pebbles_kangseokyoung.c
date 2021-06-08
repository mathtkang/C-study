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
    
    while (restart_game) {//첫번째 while문
        printf("===조약돌 게임을 시작합니다.=== \n");
        
        printf("게임 시작 전 전체 조약돌 개수를 정수로 입력해주세요. (1~20) \n"); // 게임 시작 전 조약돌 개수
        scanf("%d",&n_pebble);
        
        if(n_pebble > 20) continue;
        
        // 게임 시작
        my_turn = true; // my_turn이 true일때 player1 차례, false일때 player2(AI) 차례
        while (true) {//두번째 while문
            
            printf("남은 조약돌 개수 : %d개\n", n_pebble);
            
            //가져갈 조약돌의 갯수 입력
            if (my_turn) { //player1 (내차례) : my_turn == true
                printf("player1 차례 : 몇 개를 가져갑니까? (1~3) ");
                scanf("%d",&n_take); // 몇 개를 가져갈지 묻는다.
                
                if (n_take >= 1 && n_take <= 3) {
                    printf("player1 이(가) %d개를 가져갑니다.\n", n_take);
                } else {
                    printf("다시 입력하세요.\n");
                    continue;
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
                printf("player2 이(가) %d개를 가져갑니다.\n", n_take);
                
            }
            
            printf("\n");
    
            
            //전체 조약돌에서 가져갈 조약돌의 갯수를 제외
            if (n_pebble >= n_take) { //남은 조약돌 >= 가져가는 조약돌 : n_pebble을 n_take만큼 감소시킴
                    n_pebble -= n_take;
                    my_turn = !my_turn; //턴을 바꿔줌
                
                if (n_pebble == 0) {
                    printf("남은 조약돌 개수 : 0개\n");
                    break;
                }

            } else {//남은조약돌 <= 가져가는 조약돌 : 턴을 바꾸지 않고 계속한다(아무것도 안 함).
//                continue; //없으면 안됨 : 남은 조약돌이 1개 인데, 내가 3개를 가져가고 싶다고 하는 경우
                printf("1부터 %d까지의 정수 중에서 다시 입력해주세요. ", n_pebble);
            }
            
        }//두번째 while문
        
        
        
        // 누구 차례에 끝났는지(my_turn)에 따라서 패배자 출력 -> 끝나고 바로 내려온거니까
        if(my_turn == true){ //내가 패배
            printf("player1(나)가 패배했습니다. player2(AI)승!!\n");
        } else { //my_turn == false //AI 패배
            printf("player2(AI)가 패배했습니다. player1(나)승!!\n");
        }
        printf("\n");
    
    
        //요기를 반복문으로 감싸줘야할 것 같은데!
        while (true) { // restart_game <-- 게임을 계속할지 묻는다
            printf("계속하시겠습니까? [y/n] "); //yes:1:true, no:0:false
            char restart[2];
            scanf("%s", restart);
            
//            char restart = getchar();
            
            if(restart[0] == 'y') {
                restart_game = true;
                //continue;
                break; //? or continue??
            } else if (restart[0] == 'n') {
                restart_game = false;
                break; //아예 함수를 끝냄 - 이 방법 대신에, 첫번째 while문이 돌아가도록 한 restart_game를 false로 바꿔주는 것도 가능!
            } else {
                printf("다시 입력하세요. \n");
                continue;
                //이거 이후에 다시 물어봐야하는데!
            }
            printf("\n");
        }
    
                
    }//첫번째 while문
    
    
    
    
    return 0;
}


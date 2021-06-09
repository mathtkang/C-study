//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    bool restart_game, my_turn; //자료형을 불린으로 선언만 하면 일단 기본값(초기화값)은 false
    int n_pebble = 0; //조약돌 전체 개수 담는 변수
    int n_take = 0; //나 또는 인공지능이 가져가는 조약돌 개수 담는 변수
    restart_game = true; //게임 동작 가능
    
    while (restart_game) {//첫번째 while문
        printf("===조약돌 게임을 시작합니다.=== \n");
        printf("게임 시작 전 전체 조약돌 개수를 정수로 입력해주세요. (1~20) \n"); //게임 시작 전 조약돌 개수
        scanf("%d",&n_pebble);
        
        if(n_pebble > 20 || n_pebble < 1) continue; //'20개 초과 or 1 미만'입력시 다시 입력받음
        
        // 게임 시작
        my_turn = true; // my_turn이 true일 때 player1(나) 차례, false일 때 player2(AI) 차례
        while (true) {//두번째 while문
            printf("남은 조약돌 개수 : %d개\n", n_pebble);
            
            //가져갈 조약돌의 갯수 입력 (아직 가져가진 않음)
            if (my_turn) { //my_turn == true : player1 (내차례)
                printf("player1 차례 : 몇 개를 가져갑니까? ");
                scanf("%d",&n_take);
                
                if(n_pebble >= 3){ //이게 없으면 남은 조약돌이 1,2개이고 3개 가져가겠다고 할 때 : '(33줄)가져갑니다'와 '(64줄)다시 입력해주세요'가 함께 출력됨
                    if (n_take >= 1 && n_take <= 3) {
                        printf("player1 이(가) %d개를 가져갑니다.\n", n_take);
                    } else {
                        printf("1과 3사이의 정수를 다시 입력하세요.\n\n");
                        continue;
                    }
                }
                
            } else { //my_turn == false : player2 (AI차례)
                if(n_pebble >= 4){ //AI가 몇 개를 가져갈지 직접 코딩해줌
                    n_take = 3;
                } else if (n_pebble == 1){
                    n_take = 1;
                } else { // n_pebble == 2 || n_pebble == 3
                    n_take = n_pebble-1;
                }
                printf("player2 이(가) %d개를 가져갑니다.\n", n_take);
            }
            printf("\n");

            //입력된 조약돌 개수를 전체 조약돌에서 제거
            if (n_pebble >= n_take) { //남은 조약돌 >= 가져가는 조약돌 : n_pebble을 n_take만큼 감소시킴
                    n_pebble -= n_take;
                    my_turn = !my_turn; //턴을 바꿔줌
                
                if (n_pebble == 0) { //게임 완료
                    printf("남은 조약돌 개수 : 0개\n");
                    break;
                }

            } else { //남은조약돌 <= 가져가는 조약돌
                //처음에는 없어도 된다고 생각했는데, 고려해줘야하는 경우이다. (예. 남은 조약돌이 1개 인데, 내가 3개를 가져가고 싶다고 하는 경우)
                printf("1과 %d사이의 정수를 다시 입력해주세요. ", n_pebble);
            }
        
        }//두번째 while문
        
        
        // 누구 차례에 끝났는지(my_turn)에 따라서 패배자 출력 -> 끝나고 바로 내려온거니까
        if(my_turn == true){ //내가 패배
            printf("player1(나)가 패배했습니다. player2(AI)승!!\n");
        } else { //my_turn == false //AI 패배
            printf("player2(AI)가 패배했습니다. player1(나)승!!\n");
        }
        printf("\n");
        
    
        while (true) { // restart_game <-- 게임을 계속할지 묻는다
            printf("계속하시겠습니까? [y/n] "); //yes:1:true, no:0:false
            char restart[2]; //여기에서 문자열이 아니라 문자(%c)로 받으면 while문이 이중으로 두번 출력돼서 문자열(%s)로 입력받았습니다.
            scanf("%s", restart);
            
            if(restart[0] == 'y') {
                restart_game = true; //전체 while문이 다시 돌아가도록 한다.
                break;
            } else if (restart[0] == 'n') {
                restart_game = false; //전체 while문이 다시 돌아가도록 한다.
                break;
            } else {
                printf("다시 입력하세요. \n");
                continue; //현재 while문에서 돈다.
            }
        }//y or n : while문
        
    }//첫번째 while문
    
    
    return 0;
}


#include <stdio.h>
#include "ascii_art.h"

void print_spaces(int count) {
    for (int i = 0; i < count; i++) {
        printf(" ");
    }
}

int main(void) {
    int picnum, Xpoint, Ypoint;
    int i, lines;
    char (*ptr_main)[46];
    char (*ptr_flower)[18];
    char (*ptr_castle)[57];

    while (1) {
        printf("그림 번호 선택(1.main, 2.flower, 3.castle, 4.기타:종료): ");
        scanf("%d", &picnum);

        if (picnum < 0 || picnum > 3) {
            printf("안녕히 가세요\n");
            break;
        }

        switch(picnum) {
            case 1:
                ptr_main = (char (*)[46])ascii_main;
                lines = 9;
                break;

            case 2:
                ptr_flower = (char (*)[18])ascii_flower;
                lines = 13;
                break;

            case 3:
                ptr_castle = (char (*)[57])ascii_castle;
                lines = 21;
                break;
        }

        printf("오른쪽으로 몇 줄 이동할까요? ");
        scanf("%d", &Xpoint);
        printf("아래로 몇 줄 이동할까요? ");
        scanf("%d", &Ypoint);
        printf("선택한 그림을 해당 위치로부터 출력합니다.\n");

        for (i = 0; i < Ypoint; i++) {
            printf("\n");
        }

        for (i = 0; i < lines; i++) {
            print_spaces(Xpoint);
            
            if (picnum == 1) {
                printf("%s\n", ptr_main[i]);
            } else if (picnum == 2) {
                printf("%s\n", ptr_flower[i]);
            } else if (picnum == 3) {
                printf("%s\n", ptr_castle[i]);
            }
        }
    }
    return 0;
}
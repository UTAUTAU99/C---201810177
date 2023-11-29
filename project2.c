#include <stdio.h>
#include "ascii_art.h"

int main(void)
{
    char * ptr;
    int picnum, Xpoint, Ypoint;
    int i, j;

    printf("그림 번호 선택(1.main, 2.flower, 3.castle, 기타:종료): ");
    scanf("%d", &picnum);

    switch(picnum)
    {
        case 1 :
        printf("오른쪽으로 몇 줄 이동할까요? ");
        scanf("%d", &Xpoint);
        printf("아래로 몇 줄 이동할까요? ");
        scanf("%d", &Ypoint);
        printf("선택한 그림을 해당 위치로부터 출력합니다. \n");
        for (i=0 ; i<9 ; i++){
            printf("%s\n", ascii_main[i]);
        }
        break;

        case 2 :
        printf("오른쪽으로 몇 줄 이동할까요? ");
        scanf("%d", &Xpoint);
        printf("아래로 몇 줄 이동할까요? ");
        scanf("%d", &Ypoint);
        printf("선택한 그림을 해당 위치로부터 출력합니다. \n");
        for (i=0 ; i<13 ; i++){
            printf("%s\n", ascii_flower[i]);
        }
        break;

        case 3 :
        printf("오른쪽으로 몇 줄 이동할까요? ");
        scanf("%d", &Xpoint);
        printf("아래로 몇 줄 이동할까요? ");
        scanf("%d", &Ypoint);
        printf("선택한 그림을 해당 위치로부터 출력합니다. \n");
        for (i=0 ; i<21 ; i++){
            printf("%s\n", ascii_castle[i]);
        }
        break;

        default:
        printf("안녕히 가세요");
    }
    return 0;
}
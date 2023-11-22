#include <stdio.h>
#include "ascii_art.h"
int main(void)
{
    char * ptr1;
    char * ptr2;
    char * ptr3;
    int picnum, Xpoint, Ypoint;
    * ptr3 = ascii_main[9][46];

    printf("그림 번호 선택(1.main, 2.flower, 3.castle, 기타:종료): ");
    scanf("%d", &picnum);
    if(picnum>3 || picnum<1)
        printf("안녕히 가세요");
    else
        printf("오른쪽으로 몇 줄 이동할까요? ");
        scanf("%d", &Xpoint);
        printf("아래로 몇 줄 이동할까요? ");
        scanf("%d", &Ypoint);
        printf("선택한 그림을 해당 위치로부터 출력합니다. \n");
        printf("%c", *ptr3);
}

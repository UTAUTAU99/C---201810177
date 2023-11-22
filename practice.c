#include <stdio.h>
#include <stdlib.h>
#include "ascii_art.h"

#define ROW_SIZE  /* Replace with the actual row size of your arrays */
#define COLUMN_SIZE  /* Replace with the actual column size of your arrays */

int main(void)
{
    char *ptr;
    int picnum, Xpoint, Ypoint;
    int i, j;

    printf("그림 번호 선택(1.main, 2.flower, 3.castle, 기타:종료): ");
    scanf("%d", &picnum);

    ptr = malloc(sizeof(char));  // Allocate memory for one character

    switch (picnum)
    {
    case 1:
        for (i = 0; i < ROW_SIZE ; i++)
        {
            for (j = 0; j < COLUMN_SIZE ; j++)
            {
                *ptr = ascii_main[i][j];
                printf("%c", *ptr);
            }
            printf("\n");
        }
        break;
    case 2:
        // Similar code for case 2
        break;
    case 3:
        // Similar code for case 3
        break;
    default:
        printf("안녕히 가세요");
    }

    free(ptr);  // Free the allocated memory
    return 0;
}
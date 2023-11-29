#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char name1[20]="0", name2[20]="0";
    int age1, age2;

    printf("첫 번째 사람 정보 입력: ");
    scanf_s("%s", name1, sizeof(name1));
    scanf_s("%d", &age1);
    
    printf("첫 번째 사람 정보 입력: ");
    scanf_s("%s", name1, sizeof(name1));
    scanf_s("%d", &age1);
}
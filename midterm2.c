#include <stdio.h>
int main(void)
{
    int num1;
    int a, b, c;
    printf("아이스바의 크기를 3이상의 홀수로 입력하세요: ");
    scanf("%d", &num1);
    
    if(num1 >= 2, num1%2==0)
        printf("아이스바의 크기가 범위를 벗어납니다. (짝수 또는 3미만)");
    else
        printf("*");
}
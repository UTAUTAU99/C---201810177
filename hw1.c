#include <stdio.h>
int main(void)
{
    int result;
    int num1, num2;
    printf("Input two integers: ");
    scanf("%d %d", &num1, &num2);
    int num3 = num1 & num2;
    int num4 = num1 | num2;
    int num5 = num1 ^ num2;
    printf("결과 : %d %d %d \n", num3,num4,num5);
    return 0;
}
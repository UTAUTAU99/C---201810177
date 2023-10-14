#include <stdio.h>

void HamSu(int num)
{
    if(num > 1) HamSu(num/2);
    printf("%d", num%2);
}

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    HamSu(num);
    return 0;
}
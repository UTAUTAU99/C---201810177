#include <stdio.h>
int main(void)
{
    int n;
    printf("n을 입력 : ");
    scanf("%d", &n);
    switch(n)
    {
    case(0<= &n <10):
        printf("0이상 10미만");
        break;
    case(10<= &n <20):
        printf("10이상 20미만");
        break;
    case(20<= &n <30):
        printf("20이상 30미만");
        break;
    case(30<= &n) :
        printf("30이상");
        break;
    }
    return 0;
}
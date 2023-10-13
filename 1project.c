#include <stdio.h>
int main(void)
{
    char wrd, wrd2;
    int num1, num2, num3, num4, num5, num6, num7, num8;
    printf("=== 네이버 결제 계산 프로그램 ===\n주문액을 입력하세요: ");
    scanf("%d", &num1);
    printf("=== 결제 수단 목록 === \na)NPay머니 네이버통장 충전결제 bNPay머니 일반 충전결제 c)계좌 간편결제 \nd)네이버 현대카드 간편결제e)청구할인 삼성카드결제 f)일반 카드결제\n");
    
    while (1)
    {
        printf("결제 수단을 입력하세요: ");
        scanf("%s", &wrd);
        if ('a'<= wrd <='f')
        {
            printf("네이버 멤버십에 가입되어 있나요(y/n)? ");
            break;
        }
        else {
            printf("잘못 입력하셨습니다. 재입력 바랍니다\n");
            continue;
        }
    }
    scanf("%s", &wrd2);
    return 0;
}
#include <stdio.h>

int main(void)
{
    char payment, membership;
    int price1, price2, price3, price4, price5, price6, price7, pirce8;
    printf("=== 네이버 결제 계산 프로그램 ===\n주문액을 입력하세요: ");
    scanf("%d", &price1);
    printf("=== 결제 수단 목록 === \na)NPay머니 네이버통장 충전결제 bNPay머니 일반 충전결제 c)계좌 간편결제 \nd)네이버 현대카드 간편결제e)청구할인 삼성카드결제 f)일반 카드결제\n");
    
    while (1)
    {
        printf("결제 수단을 입력하세요: ");
        scanf("%s", &payment);
        if ('a'<= payment <='f')
        {
            break;
        }
        else {
            printf("잘못 입력하셨습니다. 재입력 바랍니다\n");
            continue;
        }
    }
    printf("네이버 멤버십에 가입되어 있나요(y/n)? ");
    scanf("%s", &membership);
    if (membership == 'Y' || membership == 'y') {
        switch(payment)
        {
            case 'a' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'b' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'c' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'd' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'e' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'f' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
        }
    else
            switch(payment)
        {
            case 'a' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'b' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'c' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'd' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'e' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
            case 'f' :
            printf("=== 결제 및 적립내역 ===\n주문금액 : %d\n기본 적립: %d\n네이버페이 머니 결제적립: %d\n네이버통장 추가적립: %d\n네이버 멤버십 추가적립: %d\n총 적립액은 %d원입니다.\n",
            &price1);
        }
    }
    return 0;
}
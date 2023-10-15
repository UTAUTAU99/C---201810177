#include <stdio.h>

int main() {
    int orderAmount;
    char paymentMethod;
    char naverMembership;

    printf("=== 네이버페이 결제 계산 프로그램 ===\n");
    printf("주문액을 입력하세요: ");
    scanf("%d", &orderAmount);

    printf("=== 결제 수단 목록 ===\n");
    printf("a) NPay머니 네이버통장 충전결제 ");
    printf("b) NPay머니 일반 충전결제 ");
    printf("c) 계좌 간편결제\n");
    printf("d) 네이버 현대카드 간편결제 ");
    printf("e) 청구할인 삼성카드결제 ");
    printf("f) 일반 카드결제\n");
    printf("결제 수단을 입력하세요: ");
    scanf(" %c", &paymentMethod);

    while (paymentMethod < 'a' || paymentMethod > 'f') {
        printf("잘못 입력하셨습니다. 재입력 바랍니다.\n");
        printf("결제 수단을 입력하세요: ");
        scanf(" %c", &paymentMethod);
    }

    
    printf("네이버 멤버십에 가입되어 있나요 (y/n)? ");
    scanf(" %c", &naverMembership);

    int basicPoints = orderAmount * 0.01;
    int naverHyundaiCardPoints;
    if(orderAmount>200000)
        naverHyundaiCardPoints=10000;
    else naverHyundaiCardPoints = orderAmount * 0.05;

    int SamSungCard;
    if(orderAmount<50000)
        SamSungCard=0;
        if(orderAmount<100000)
            SamSungCard = orderAmount*0.05;
        else
            SamSungCard = 5000;

    printf("=== 결제 및 적립 내역 ===\n");
    printf("주문금액 %d원\n", orderAmount);
    printf("기본 적립 %d원\n", basicPoints);

    switch (paymentMethod) {
        case 'a':
            printf("네이버페이 머니 결제적립 %.0f원\n", basicPoints * 1.5);
            printf("네이버통장 추가적립 %.0f원\n", basicPoints * 0.5);
            break;
        case 'b':
            printf("네이버페이 머니 결제적립 %.0f원\n", basicPoints * 1.5);
            break;
        case 'd':
            if (naverHyundaiCardPoints > 10000) {
                naverHyundaiCardPoints = 10000;
            }
            printf("네이버 현대카드 추가적립 %d원\n", naverHyundaiCardPoints);
            break;
        case 'e':
            if (orderAmount >= 50000) {
                printf("청구할인 %d원\n", SamSungCard);
            }
            break;
        default:
            break;
    }

    int naverMembershipPoints;
    if (naverMembership == 'y' || naverMembership == 'Y') {
        if(orderAmount>1400000)
            naverMembershipPoints=20000;
        else if (orderAmount < 200000) {
                 naverMembershipPoints = orderAmount * 0.04;
            } else {
                naverMembershipPoints = 8000 + (orderAmount - 200000) * 0.01;
            }
            printf("네이버 멤버십 추가적립 %d원\n", naverMembershipPoints);
    }
    
    int totalPoints = basicPoints;
    if (paymentMethod == 'a' || paymentMethod == 'b') {
        totalPoints += basicPoints * 2;
    }
    if (paymentMethod == 'd' && naverHyundaiCardPoints > 0) {
        totalPoints += naverHyundaiCardPoints;
    }
    if (orderAmount >= 50000 && paymentMethod == 'e') {
        totalPoints += 5000;
    }
    if (naverMembershipPoints > 0) {
        totalPoints += naverMembershipPoints;
    }

    printf("총 적립액은 %d원입니다.\n", totalPoints);

    return 0;
}

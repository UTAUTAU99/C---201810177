#include <stdio.h>
#include <stdio.h>
int Rest_Money = 1000000;
int main(void)
{
   int select;
   int num1;
   int num2;

   printf("===== ㅅㅁ은행 ATM기기 입니다.===== \n");
   printf("1.입금\n2.출금\n3.잔액조회\n4.종료\n");
   printf("원하는 작업번호를 선택하세요: ");
   scanf("%d", &select);
   
   while (select < 1 || select > 4) {
        printf("올바른 작업 번호를 선택하세요. ");
        break;
   }
   

   switch(select){
   case 1:
      printf("입금할 금액을 입력하세요: ");
      scanf("%d", &num1);
      printf("입금이 완료되었습니다. \n현재잔고는 %d원 입니다.", Rest_Money+num1);
      break;
   case 2:
      printf("출금할 금액을 입력하세요: ");
      scanf("%d", &num2);
      printf("출금이 완료되었습니다. \n현재잔고는 %d원 입니다.", Rest_Money-num2);
      break;
   case 3:
      printf("현재 잔고는 %d원 입니다", Rest_Money);
      break;
   case 4:
      printf("안녕히 가세요.");
      break;
    }
    return 0;
}
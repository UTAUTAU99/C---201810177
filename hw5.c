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

#include <stdio.h>

void dec2bin(int num)
{
	if(num==1)
		printf("1");
	else
	{
		int n = num % 2;
		dec2bin(num /2);
		printf("%d", n);
	}
}

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    dec2bin(num);
    return 0;
}
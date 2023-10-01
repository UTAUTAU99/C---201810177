#include <stdio.h>
int main(void)
{
    int num, space, star;
    for(num=0; num<5; num++)
    {
        for(space=num; space<=5-1; space++){
            printf(" ");
    }
        for(star=0; star<=(num*2); star++){
            printf("*");
        }
        printf("\n");
    }   
    return 0;
}
#include <stdio.h>
int main(void)
{
    int num, space, star;
    for(num=0; num<5; num++)
    {
        for(space=4; space>0; space--)
            printf(" ");
        {
            for(star=1; star<11; space++2)
                printf("*");
        }
    }
    return 0;
}
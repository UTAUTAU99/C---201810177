#include <stdio.h>
int main(void)
{
    float num1, num2;
    printf("Please enter kilometers : ");
    scanf("%f", &num1);
    num2 = num1*0.6214;
    printf("%.1f km is equal to %.1f miles.", num1, num2);
    return 0 ;
}

#include <stdio.h>
int main(void)
{
    double km;
    printf("Please enter kilometers : ");
    scanf("%lf", &km);
    printf("%.3f km is equal to %.3f miles.", km, km/1.609);
    return 0;
}
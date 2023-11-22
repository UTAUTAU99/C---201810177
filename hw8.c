#include <stdio.h>
#include <math.h>

double SD(double *arr)
{
    double sum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    double avg = sum / 5;
    double var = 0.0;
    for (int i = 0; i < 5; i++)
    {
        var += pow((arr[i] - avg), 2);
    }
    var = var / 5;
    double std = sqrt(var);
    return std;
}

int main(void)
{
    double num1, num2, num3, num4, num5;
    printf("Enter 5 real numbers: ");
    scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);
    double arr[5] = {num1, num2, num3, num4, num5};
    printf("Standard Deviation = %.3lf", SD(arr));
    return 0;
}
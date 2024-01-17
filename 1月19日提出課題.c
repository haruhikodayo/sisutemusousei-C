#include<stdio.h>

int main(void)
{
    int a, b, c, x;


    printf("数字をいれてね: ");
    scanf_s("%d", &a);
    printf("さっきと違う数字をいれてね: ");
    scanf_s("%d", &b);
    printf("さっきと違う数字をいれてね: ");
    scanf_s("%d", &c);

    x = b*b-4*a*c;

    int upperCaseCount = 0;
    int upperCaseCount2 = 0;
    int upperCaseCount3 = 0;
    int upperCaseCount4 = 0;
    if (x == 0) {
        upperCaseCount++;

    }

    if (x > 0) {
        upperCaseCount2++;

    }

    if (x < 0) {
        upperCaseCount3++;

    }

    if (a == 0) {
        upperCaseCount4++;
    }


    if (upperCaseCount == 1 && upperCaseCount4 == 0) {
        printf("解はひとつ, ");
    }

    else if (upperCaseCount2 == 1 && upperCaseCount4 == 0)
    {
        printf("解はふたつ, ");
    }

    else if (upperCaseCount3 == 1 && upperCaseCount4 ==0)
    {
        printf("解はない, ");
    }
    else
    {
        printf("もう一回！");
    }

    return 0;
}

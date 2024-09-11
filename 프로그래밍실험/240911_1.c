#include <stdio.h>

int main()
{
    int num;

    printf("세 자리 숫자 입력: ");
    scanf("%d", &num);

    printf("백의 자리: %d\n", num / 100);
    printf("십의 자리: %d\n", num % 100 / 10);
    printf("일의 자리: %d\n", num % 100 % 10);

    return 0;
}
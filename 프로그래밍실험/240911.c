#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float f;
    double d;

    scanf("%d", &i);
    scanf("%f %lf", &f, &d);

    printf("%d %f %f\n", i, f, d);

    int res = i + 20;
    printf("res : %d\n", res);

    printf("f(%d) = %d\n", i, 3 * i * i - 4 * i +7);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void sumOfWeight(int g)
{
    int count = 0;

    for(int i = 1; i <= 10; i++) // 2g pendulum
        for(int j = 1; j <= 10; j++) // 3g pendulum
            for(int k = 1; k <= 10; k++) // 5g pendulum
                if(2 * i + 3 * j + 5 * k == g)
                {
                    printf("%d %d %d\n", i, j, k);
                    count++;
                }

    printf("%d\n", count);
}

int main()
{
    int num;
    scanf("%d", &num);

    sumOfWeight(num);

    return 0;
}
#include <stdio.h>

int main()
{
    int grade;
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
        printf("Wrong Input\n");
    else
    {
        switch(grade / 10)
        {
            case 10:
            case 9:
                printf("A\n");
                break;

            case 8:
                printf("B\n");
                break;

            case 7:
                printf("C\n");
                break;

            default:
                printf("D or F\n");
                break;
        }   
    }
    
    return 0;
}
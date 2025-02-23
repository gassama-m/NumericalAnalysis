#include <stdio.h>
// status:PROGRAM COMPLETED
//  hafta1
/*Let's find the squareRoot of 2,  4 digits after the coma using the following formula
𝑥1 = 1, 𝑥𝑛+1 =(𝑥𝑛 +2/𝑥𝑛)/2 */

// Iteration
double v2(int n, double x1)
{
    if (n == 1)
        return x1;
    for (int i = 0; i < n; i++)
    {
        x1 = (x1 + 2 / x1) / 2;
    }
    return x1;
}
// recursif function
double v2r(int n, double x1)
{
    if (n == 1)
        return x1;
    return v2r(--n, (x1 + 2 / x1) / 2);
}

int main()
{
    int choice, n;
    double x1;

    while (1)
    {
        printf("Enter \n0. Exit\n1. iteratif\n2. recursif\n=>");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            printf("\n\nBYE BYE ^_^");
            return 0;
        }
        case 1:
        {
            printf("\niteration method was chosen\nEnter the number of iteration and the first term\n=>");
            scanf("%d", &n);
            scanf("%lf", &x1);
            while (x1 == 0)
            {
                printf("\nX1 must not be null please enter an other number: ");
                scanf("%lf", &x1);
            }
            printf("\nBy iteration v2=%lf\n", v2(n, x1));
            break;
        }
        case 2:
        {
            printf("\nRecursif method was chosen\nenter the number of iteration and the first term\n=>");
            scanf("%d", &n);
            scanf("%lf", &x1);
            while (x1 == 0)
            {
                printf("\nx1 must not be null please enter an other number: ");
                scanf("%lf", &x1);
            }
            printf("\nBy recurtion v2=%lf\n", v2r(n, x1));
            break;
        }
        default:
        {
            printf("\nWRONG COMMAND\n");
            break;
        }
        }
    }
    return 0;
}
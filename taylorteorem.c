#include <stdio.h>
#include <math.h>

//  This code calculates f(x)=cos(2x) with x0=0 and given x using the Taylor theorem

double factorial(int n)
{
    if (n == 1)
        return 1;
    printf("ok3");
    return n * factorial(n - 1);
}
double Taylor(double x, int n) // here n is the number of terms and x0 the first term
{
    printf("taylor");
    if (n == 0)
        return cos(0);
    else if (n % 2 == 0)
        return (pow(x, n) * pow(-4, n / 2)) / factorial(n) + Taylor(x, n - 2);
    else if (n % 2 != 0)
        return Taylor(x, n - 1);
}

int main()
{
    double x;
    int n;
    printf("Enter number of terms n:\n=>");
    scanf("%d", &n);
    printf("Enter x:\n=>");
    scanf("%lf", &x);
    printf("According to Taylor Theorem, cos(%lf)=%lf with %d terms", x, Taylor(x, n), n);
    return 0;
}